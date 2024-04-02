from pytube import YouTube, Playlist
from playsound import playsound
import caffeine
import os
import certifi

os.environ['SSL_CERT_FILE'] = certifi.where()

def Download(link, path):
    def is_playlist(link):
        return "playlist?list=" in link

    caffeine.on(display=False)

    if is_playlist(link):
        playlist = Playlist(link)
        for video in playlist.videos:
            video.streams.get_highest_resolution().download(path)
    else:
        youtubeObject = YouTube(link)
        stream = youtubeObject.streams.get_highest_resolution()
        try:
            stream.download(path)
        except:
            print("An error has occurred")
        else:
            print("Download is completed successfully")
            playsound("/Users/afirma/Music/MP3/Complete.mp3")

    caffeine.off()


link = input("Enter the YouTube video/playlist URL: ")
Download(link, "/Users/afirma/Movies")
