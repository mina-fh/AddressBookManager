# AddressBookManager

This README provides an overview of an address book management program. The program allows users to perform various operations on a list of addresses, such as reading from a file, sorting, adding, deleting, and writing the results to files.

**Menu Options**
The program offers the following menu options:

MENU

1: Load Address Book

2: Overwrite Address Book

3: Sort

4: Add

5: Delete

6: Write Results (to result file)

0: Exit


The user can input the menu number from the keyboard to execute the corresponding operation. 
To prompt the user for input, the program displays the following message:

Enter menu number >

**Functionality**
Each menu option corresponds to a specific operation, which is implemented as a separate function. Here's a brief description of each operation:

**-Load Address Book:** Reads data from a file called address and stores it in an array of structures. The file contains 100 records of addresses.

**-Overwrite Address Book:** Writes the current array content to the address file, but only if sorting, adding, or deleting operations have been performed. File writing is done by a common function used by option 6 as well.

**-Sort:** Sorts the current array content based on a selected key. The user can choose to sort by name, name furikana, zip code, address, or address furikana. The program prompts the user to enter the sorting key number.

**-Add:** Adds a new address record to the end of the current array. The user inputs the new address details from the keyboard. The program automatically assigns a number to the record.

**-Delete:** Deletes an address record from the array based on the specified number entered from the keyboard. The program shifts the subsequent records forward one by one.

**-Write Results:** Writes the current array content to a file called result. Similar to option 2, file writing is done by a common function used by both options.
The program operates in an infinite loop until the user inputs 0, which breaks the loop and terminates the program.

**Source File Structure**
The program is structured with multiple source files and a header file. 

このREADMEは、アドレス帳管理プログラムの概要を説明するものです。このプログラムでは、住所録のリストに対して、ファイルからの読み込み、並べ替え、追加、削除、結果のファイルへの書き込みなど、さまざまな操作を行うことができます。

**メニューオプション** 

このプログラムには、以下のメニューオプションがあります：

MENU

1: アドレス帳の読み込み

2: アドレス帳の上書き

3: 並べ替え

4: 追加

5：削除

6：結果書き込み（結果ファイルへ）

0：終了

ユーザーは、キーボードからメニュー番号を入力することで、対応する操作を実行することができます。ユーザが入力することを促すために、プログラムは以下のメッセージを表示する：

番号入力>

**機能** 
各メニューのオプションは、特定の操作に対応し、それは別の機能として実装されています。以下は、それぞれの操作の簡単な説明です：

**-アドレス帳を読み込む：** アドレス帳の読み込み： addressというファイルからデータを読み込み、構造体の配列に格納します。ファイルには100レコードのアドレスが含まれています。

**-Overwrite Address Book（アドレス帳の上書き）：** アドレス帳の読み込み：アドレスというファイルからデータを読み込み、構造体の配列に格納する。ただし、ソート、追加、削除の操作が行われた場合のみ、現在の配列内容をアドレスファイルに書き込む。ファイルの書き込みは、オプション6でも使用される共通の関数で行われる。

**-ソート：**　選択したキーに基づき、現在の配列内容をソートする。氏名、氏名フリカナ、郵便番号、住所、住所フリカナのいずれかを選択してソートすることが可能である。プログラムは、ソートキーの番号を入力するようユーザーに要求する。

**-Add 追加：**　新しい住所録を現在の配列の末尾に追加します。ユーザーは、キーボードから新しい住所の詳細を入力する。プログラムは自動的にレコードに番号を割り当てる。

**-削除する：** キーボードから入力された指定された番号に基づいて、配列からアドレスレコードを削除します。プログラムは、後続のレコードを1つずつ前にシフトする。

**-結果を書き込む：** 結果書き込み：現在の配列の内容をresultと呼ばれるファイルに書き込む。オプション2と同様に、ファイルの書き込みは両オプションで使用される共通の関数で行われる。このプログラムは、ユーザーが0を入力するまで無限ループで動作し、ループを解除してプログラムを終了させる。

**ソースファイルの構造 **

プログラムは、複数のソースファイルとヘッダーファイルで構成されています。
