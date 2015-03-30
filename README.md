# SAFE

Simeple Actor Framework for Embedded system

##これはなに？
mbedのLPC1768のプログラムをアクターモデルで動くようラップするためのフレームワーク

##内容物
ディレクトリ C12832 : LPC1768のための液晶表示ライブラリ(SAFEの起動に必要でない、サンプルプログラムの起動に必要)  
ディレクトリ LM75B  : LPC1768のための温度計ライブラリ(SAFEの起動に必要でない、サンプルプログラムの起動に必要)  
ディレクトリ mbed   : mbedの標準ライブラリ(SAFEの起動に必要)  
ディレクトリ sample : サンプルプログラム(SAFEの起動に必要でない)  
その他ファイルのうちgit関連でないもの : SAFEのライブラリ(SAFEの起動に必要)  

##おおざっぱな説明
main.cpp まずここが呼ばれる。サンプルプログラムの関数をここで呼んでいる  
サンプルプログラムの関数では、Actor::start(); を呼んでアクターシステムを起動している  
Actorを継承した各クラスのreceiveMessage()が、そのアクターに何らかのメッセージが届いた段階でコールバックされる  
sample2ではsysActor.setPeriodicTaskでシステムアクターに周期的にメッセージを指定したアクターに送らせている。  
この周期的なメッセージのコールバックによって計算が進んでいく。  
