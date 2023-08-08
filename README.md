# Stop_slacking_off
加速度検出式サボり防止デバイス（笑）
雑なつくりかたまとめ

材料
Arduino Uno（とUSBケーブル）
電子ブザー（70円）：https://akizukidenshi.com/catalog/g/gP-09800/
加速度センサー（500円）：https://akizukidenshi.com/catalog/g/gK-15232/
適当な導線
USBを差せる電源（PC，モバイルバッテリー，ACアダプターなどなんでもいい）

作り方
1．加速度センサーを3.3V，GND，A0ピンに結線する
2．ブザーをGNDと7番ピンに結線する
3．プログラム（pen.ino）を書き込む
4．USBを差す．
以上．

センサーの値には個体差があるかもしれないので適宜調整してください．
