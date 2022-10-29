# adapterpattern cpp demo code

## Overview

    Adapter Patternの使い方

## 使いどころ

    すでに存在するクラスのラッパーを作り、ラッパー経由で既存クラスを利用する手法です。  
    この例では、WriterクラスをベースとしたConsoleWriteクラス、FileWriteクラスが存在しています。  
    そこに、他人が作ったHtmlWriterクラスが現れるのですが、そいつはWriterクラスを継承していません。  
    インターフェイスが異なるのでConsleWriterクラス、FileWriterクラスと同じように利用できないのですが  
    その問題を解決する術がこのAdapter Patternとなるわけです。  

    pattern1では「クラスアダプター」という手法で解決しています。  
    この方法は、アダプターとなるクラスにWriterとHtmlWriterを多重継承させることでインターフェイスを統一させます。  
    この実装の場合、少々クラス間の結合が密になってしまいますが比較的簡単に実装が可能です。  

    pattern2では「オブジェクトアダプター」という手法で解決しています。  
    この方法は、アダプターとなるクラスはWriterのみを継承し、HtmlWriterはオブジェクトとして保持をしています。  
    アダプタークラスへのアクセスはWriterのインターフェイスを利用し、実際にはHtmlWriterクラスを制御するわけです。  
    HtmlWriterクラスの作りが複雑な場合、アダプタークラス側で色々と整えてHtmlWriteクラスを利用する必要があります。  
    この場合は実装が複雑になるかもしれません。  
    しかし、各クラス間の結合度は疎となるので、依存度がかなり下がると思います。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/adapter_cpp/blob/master/LICENSE)

