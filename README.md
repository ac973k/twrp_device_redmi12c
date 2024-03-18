# Custom Recovery Device Tree for Xiaomi Poco C55 (earth)

The Poco C55 is a budget range smartphone from Redmi, Released 2023, February 28

## Device Specifications

Basic   | Spec Sheet
-------:|:-------------------------
OS      | Android 12, MIUI 13 for POCO
CPU     | Octa-core (2x2.0 GHz Cortex-A75 & 6x1.8 GHz Cortex-A55)
Chipset | Mediatek MT6769Z Helio G85 (12nm)
GPU     | Mali-G52 MC2
Memory  | 4GB/6GB RAM
Storage | 64GB/128GB
MicroSD | microSDXC (dedicated slot)
Battery | Li-Po 5000 mAh, non-removable
Resolution | 720 x 1650 pixels (~268 ppi density)
Camera (Rear)  | 50 MP, f/1.8, (wide), PDAF, 0.08 MP (auxiliary lens)
Rear Camera Features | LED flash, HDR
Video   | 1080p@30fps
Camera (Front)  | 5 MP
Sensors | Fingerprint (rear-mounted), accelerometer, virtual proximity sensing
Others | OTG, 10W wired charging

## Current Status

- [X] Booting
- [X] Decrypt /data
- [X] Flash
- [X] Restore
- [X] Backup
- [X] Fastbootd
- [X] ADB
- [X] MTP
- [X] Reboot To System
- [X] Vibration
- [X] OTG
- [X] Touch Screen
- [X] Correct Screen Size
- [X] Brightness

## Known Bugs

- [ ] Battery Percentage (works randomly)

## How to flash

```shell
1) fastboot --disable-verity --disable-verification flash vbmeta vbmeta.img
2) fastboot flash boot boot.img
3) fastboot reboot recovery
4) flash stock boot.img in twrp
5) twrp -> advanced -> install recovery ramdisk
```

## How to take logs
```shell
1) adb logcat -d > log.txt
2) adb pull /tmp/recovery.log
3) adb shell dmesg > dmesg.log
```

## Device Picture

![Poco C55](https://fdn2.gsmarena.com/vv/pics/xiaomi/xiaomi-poco-c55-1.jpg "Poco C55")

## Warning
- Always backup before flashing
- Flash only if you know how to unbrick your device
- I am not responsible for any bricked devices, dead sd cards, thermonuclear war, or you getting fired because the alarm app failed.