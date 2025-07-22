# EWPackageTools - Enhanced Fork

A **custom enhanced fork** of the original [EWPackageTools](https://github.com/thirtque/EWPackageTools) by thirtque, with significant improvements and new features for browsing contents of Eastward `.g` packages.

##  New Features in This Fork
- **PNG Filtering**: Toggle "PNG Only" mode to show only image files numbered as 1, 2, 3, etc.
- **New UI**: Improved filtering and navigation for easier image browsing
- **Windows Build Support**: Full Windows compilation support with Visual Studio

## Screenshots
![ewtools](https://user-images.githubusercontent.com/90976311/143503141-a6ccfcb1-15f5-4c96-9fba-020e4113c424.png)

## Build Instructions

### Windows (Visual Studio)
```bash
# Install dependencies
winget install Git.Git
winget install Kitware.CMake
winget install Microsoft.VisualStudio.2022.BuildTools

# Clone with submodules
git clone --recurse-submodules https://github.com/YOUR_USERNAME/EWPackageTools.git
cd EWPackageTools

# Build
mkdir build
cd build
cmake .. -G "Visual Studio 17 2022" -A x64
cmake --build . --config Release

# Run
cd Release
./EWPackageTools.exe
```


## Usage
1. Click "Open" to load an Eastward `.g` package file
2. Use the **"PNG Only"** checkbox to filter and display only image files as numbered entries (1, 2, 3...)
3. Click on entries to preview images, text files, or view hex dumps
4. Extract individual files or all files at once

## Credits
Based on the original [EWPackageTools](https://github.com/thirtque/EWPackageTools) by [thirtque](https://github.com/thirtque).

This enhanced fork adds modern features and improved Windows support.
