# Ploter

Aka "setting up Gameboy Advance homebrew development takes a lot of time... and is super fun".
I've already done a bit of NDS, a bit of GB, time to move to GBA.

This homebrew has a bunch of cool things I did today, a script that automatically runs make and No$GBA Debugger on each ctrl+s in the .c file, it has the header file from the second lesson of Tonc and generates cool results too.

It advances a bit further than the third chapter of Tonc, puts CPU in halt after the bitmap has been drawn not to drain resources. Bitmap mode 3, BG mode 2.

## Usage

Change constants on top of ploter.c, make and run in an emulator.

## Screenshots

Different results can look like this:
![](https://i.imgur.com/vSULmXf.png)![](https://i.imgur.com/OSaZfPt.png)![](https://i.imgur.com/8JLEdIx.png)