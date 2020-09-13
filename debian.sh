sudo apt install xorg bspwm rofi compton pulseaudio nitrogen build-essential git rxvt-unicode cmake cmake-data libcairo2-dev libxcb1-dev libxcb-ewmh-dev libxcb-icccm4-dev libxcb-image0-dev libxcb-randr0-dev libxcb-util0-dev libxcb-xkb-dev pkg-config python-xcbgen xcb-proto libxcb-xrm-dev i3-wm libasound2-dev libmpdclient-dev libiw-dev libcurl4-openssl-dev libpulse-dev libxcb-composite0-dev vim
mkdir .local
mkdir .local/share 
git clone htpps://github.com/vibewill/fonts
cp -r fonts/fonts .local/sahare
cp -r fonts/config .config 
cp fonts/Xdefautls .Xdefaults 
fc-cache -fv 
git clone https://github.com/jaagr/polybar.git
cd polybar && ./build.sh
