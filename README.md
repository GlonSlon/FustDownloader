
# FustDownloader

U can install the required SW AUTOMATICALLY by following these steps:

```bash
git clone https://github.com/GlonSlon/FustDownloader
cd FustDownloader
```
Now fill the prutA with what u need(UInstaller.cpp):

```c++
std::string prutA[] = {"gcc","g++","clang","perl","lua5.4","python3","pip3","net-tools","iw","nmap","wireshark","git","dia","libimage-exiftool-perl"};
```

Run building the file and install u crap:
```bash
sudo bash RunUI
sudo ./UInstaller
```

...Oh, you can also remove awkward lines of code that you don't want to show anyone...
(look in RunUI)
```bash
#cat UInstaller.s
#or
#cat UInstaller.s | grep "lines of code"

grep -v "GCC: ("  UInstallerASM.s > temp && mv temp  UInstallerASM.s
```

Have fun baby :no_pedestrians:
