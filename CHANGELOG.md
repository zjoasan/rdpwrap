
Jul 19, 2023

RDP Wrapper Library mod v1.8.9.9


    Added buttons "Update ini" and "Restart TermService" to RDP_CnC
    Added automatic theme selection depending on the windows theme, so there's only installer
    Changed green color to be visible in both theme styles
    Updated onboard ini file

________________________________________________________________

Apr 29, 2023

RDP Wrapper Library mod v1.8.8.8

    Added H264_OFF and command to restore it when reinstalling
    Updated onboard ini file

________________________________________________________________

May 17, 2022

RDP Wrapper Library mod v1.8.8.7

    Fixed BUG with updater from PR
    Fixed TASKADD which was incorrect from PR
    Updated onboard ini file

________________________________________________________________

Jan 31, 2022

RDP Wrapper Library mod v1.8.7.2

    Added support for custom INI update URL "RDPWinst -w https://..." thx to PR by sashaqwert
    Adding task for updates in installers and removeing task in uninstaller
    rdpwrap.ini updated to latest (29.01.2022)
    If you want to add delay for the task because of missing internet connection on startup use this command in cmd as admin:
    schtasks /change /tn "RDPWUpdater" /delay 0002:00 - this command will add a 2 minutes delay to your task

________________________________________________________________

Dec 8, 2021

RDP Wrapper Library mod v1.8.6.1

Changelog:

    rdpwrap.ini updated to latest (08.12.2021)
    Fixed bug of update.bat
    Fixed design issues of RDP_CnC

________________________________________________________________

Nov 28, 2021

RDP Wrapper Library mod v1.8.6

Changelog:

    rdpwrap.ini updated to latest (28.11.2021)
    RDPChecker is deprecated and fully replaced with mstsc
    Added LGPO.exe to Installer and Uninstaller for enabling(Installer) and disabling(Uninstaller) H264 priority for RDP on a supported Windows versions ( from Windows 10 1511 update and the Windows Server 2016 Technical Preview 4)
    RDP_CnC shortcut will be moved to desktop when used Installer and will be removed with Uninstaller

________________________________________________________________

Nov 26, 2021

RDP Wrapper Library mod v1.8.5

    RDPConf and RDPCheck are merged in RDP_C&C (Configuration and check)
    Redesigned interface
    Added mstsc test additional to old way RDPCheck
    Added executable Installer & Uninstaller (Created with BatToExeConverter)
    Compiled exe will copy just 3 files - RDPWInst.exe, RDP_C&C.exe and update.bat (without install.bat and uninstall.bat) and ther run RDPWinst -i -o

All files tested on Win7-11

If you don't know what to do (maybe newbie) - Download Installer.exe and Uninstaller.exe and use it, when you need and if you need.
Enjoy!
________________________________________________________________

Nov 24, 2021

RDP Wrapper Library mod v1.7.4b

Changelog:

    Added request for administrative privileges
    Changed icons

________________________________________________________________

Nov 22, 2021

RDP Wrapper Library mod v1.7.4

Version number has nothing in common with versions of Stas'M Corp and changed for finding differences on the screenshots of people to know, which version they really use.
At the heart of the build is v1.6.2 of Stas'M Corp repo.
Changes:

    Replaced ini inside RDPWinst with mine
    Replaced link to my ini inside RDPWinst with link to my ini
    Renames and repacks of original files
    Changed resolution of RDPCheck to 800 x 600
    Removed ActiveX warning when connecting RDPCheck
    RDP updated to MS RDP Client 9
    Added dark theme
    Many, many others...
