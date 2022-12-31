# Rainmeter Tron-MCP

![Preview](.github/Preview.png)

Full featured Rainmeter monitoring suite inspired by Tron movies.

## Installation

You will need :

* Rainmeter 4.3+
* [HWiNFO](https://www.hwinfo.com/download/)
* [OpenWeather API key](https://openweathermap.org) if your use the weather widget
* [CoinMarketCap API key](https://coinmarketcap.com) if you use the Coin widgets
* [ImageMagick](https://imagemagick.org/script/download.php#windows) if your use the Coin widgets
* [Plex token](https://www.plexopedia.com/plex-media-server/general/plex-token) if you want to display the current Plex track on the Music widget

After loading and arranging the widgets at your will, right click on any widget to access the configuration window and the HWiNFO memory viewer (usefull to find `SensorId`, `SensorInstance` and `EntryId` values).

## Features

![Help](.github/Help.png)

### Music

The widget allows to configure two standard players (like Spotify and AIMP) as well a Plex server. It will display whatever track is played on any configured player.

### Coin

ImageMagick is required to convert the SVG sparkline downloaded from CoinMarkerCap into a PNG (Rainmeter cannot display SVG).

## License

Code under MIT License.
