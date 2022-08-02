#include <iostream>
using namespace std;

int sNumber(int number); //学籍番号
void scoreFix(double *score); //点数の修正
void outScore(double *score); //点数の表示
void text1(); //を入力してください
void text2(); //国語
void text3(); //数学
void text4(); //理科
void text5(); //社会
void text6(); //英語
void text7(); //合計
void text8(); //正しい
void text9(); //平均
void text10(); //表示アナウンス
void textSpace(); //スペース
void textNumber(); //出席番号
void textScore(); //の点数
void textEnd(); //完了アナウンス

struct Student {
  double kokugo; //国語の点数
  double suugaku; //数学の点数
  double rika; //理科の点数
  double syakai; //社会の点数
  double eigo; //英語の点数
};

int main() {
  double score[150] = {
    96, 95, 100, 99, 98, 88, 98, 87, 76, 99,  0,  0,  0,  0,  0, 65, 74,
    25, 35,  52, 21, 94, 24, 20, 89, 24, 97, 97, 96, 75, 84, 54, 95, 75,
    50, 75,  86, 54, 87, 99, 64, 44, 50, 75, 50, 23,  5,  9, 11, 79, 46,
    42, 83,  51, 12, 76, 46, 86, 47, 69, 57,  0,  1, 13, 24, 85, 83, 31,
     1, 71,  31, 96, 16, 79, 43, 45, 69, 48, 54, 80, 93, 66, 88, 41, 16,
    66, 83,  28, 18, 29, 63, 75, 96, 64, 89, 19, 48, 37, 16, 16, 74, 14,
    11, 90,  59, 20,  0, 27, 68, 54, 73, 26, 86, 61, 33, 68, 93, 82, 96,
    10, 10,  24, 86, 73, 89, 40, 58,  2, 43, 75, 85, 16, 55, 96, 72, 13,
    15, 73,  41, 49, 50, 58, 50, 58, 50};

  for (int t = 1; t > 0; t++) {
    cout << "何をしますか？\n1:点数の確認　2:"
            "点数の修正（選択肢の数字を入力して選んでください）"
         << endl;
    int u;
    cin >> u;
    if (u == 1) {
      cout << "点数の確認をします。" << endl;
      outScore(score);
    } else if (u == 2) {
      cout << "点数の修正をします。" << endl;
      scoreFix(score);
    } else {
      cout << "選択肢にありません。";
    }
  }
}

void outScore(double *score) {
  int number;//入力された番号
  int total;//合計点
  double average;//平均点

  Student student1 = {score[0], score[1], score[2], score[3], score[4]};
  Student student2 = {score[5], score[6], score[7], score[8], score[9]};
  Student student3 = {score[10], score[11], score[12], score[13], score[14]};
  Student student4 = {score[15], score[16], score[17], score[18], score[19]};
  Student student5 = {score[20], score[21], score[22], score[23], score[24]};
  Student student6 = {score[25], score[26], score[27], score[28], score[29]};
  Student student7 = {score[30], score[31], score[32], score[33], score[34]};
  Student student8 = {score[35], score[36], score[37], score[38], score[39]};
  Student student9 = {score[40], score[41], score[42], score[43], score[44]};
  Student student10 = {score[45], score[46], score[47], score[48], score[49]};
  Student student11 = {score[50], score[51], score[52], score[53], score[54]};
  Student student12 = {score[55], score[56], score[57], score[58], score[59]};
  Student student13 = {score[60], score[61], score[62], score[63], score[64]};
  Student student14 = {score[65], score[66], score[67], score[68], score[69]};
  Student student15 = {score[70], score[71], score[72], score[73], score[74]};
  Student student16 = {score[75], score[76], score[77], score[78], score[79]};
  Student student17 = {score[80], score[81], score[82], score[83], score[84]};
  Student student18 = {score[85], score[86], score[87], score[88], score[89]};
  Student student19 = {score[90], score[91], score[92], score[93], score[94]};
  Student student20 = {score[95], score[96], score[97], score[98], score[99]};
  Student student21 = {score[100], score[101], score[102], score[103],score[104]};
  Student student22 = {score[105], score[106], score[107], score[108],score[109]};
  Student student23 = {score[110], score[111], score[112], score[113],score[114]};
  Student student24 = {score[115], score[116], score[117], score[118],score[119]};
  Student student25 = {score[120], score[121], score[122], score[123],score[124]};
  Student student26 = {score[125], score[126], score[127], score[128],score[129]};
  Student student27 = {score[130], score[131], score[132], score[133],score[134]};
  Student student28 = {score[135], score[136], score[137], score[138],score[139]};
  Student student29 = {score[140], score[141], score[142], score[143],score[144]};
  Student student30 = {score[145], score[146], score[147], score[148],score[149]};

  int end = 1;
  for (int i = 1; end > 0; i++) {
    cout << "あなたの出席番号を入力してください" << endl;
    cin >> number;

    int bangou = sNumber(number);
    switch (number) {
    case 1:
      text10();
      total = student1.kokugo + student1.suugaku + student1.rika +
              student1.syakai + student1.eigo;
      average = (student1.kokugo + student1.suugaku + student1.rika +
                 student1.syakai + student1.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student1.kokugo << ", ";
      text3();
      textSpace();
      cout << student1.suugaku << ", ";
      text4();
      textSpace();
      cout << student1.rika << ", ";
      text5();
      textSpace();
      cout << student1.syakai << ", ";
      text6();
      textSpace();
      cout << student1.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 2:
      text10();
      total = student2.kokugo + student2.suugaku + student2.rika +
              student2.syakai + student2.eigo;
      average = (student2.kokugo + student2.suugaku + student2.rika +
                 student2.syakai + student2.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student2.kokugo << ", ";
      text3();
      textSpace();
      cout << student2.suugaku << ", ";
      text4();
      textSpace();
      cout << student2.rika << ", ";
      text5();
      textSpace();
      cout << student2.syakai << ", ";
      text6();
      textSpace();
      cout << student2.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 3:
      text10();
      total = student3.kokugo + student3.suugaku + student3.rika +
              student3.syakai + student3.eigo;
      average = (student3.kokugo + student3.suugaku + student3.rika +
                 student3.syakai + student3.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student3.kokugo << ", ";
      text3();
      textSpace();
      cout << student3.suugaku << ", ";
      text4();
      textSpace();
      cout << student3.rika << ", ";
      text5();
      textSpace();
      cout << student3.syakai << ", ";
      text6();
      textSpace();
      cout << student3.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 4:
      text10();
      total = student4.kokugo + student4.suugaku + student4.rika +
              student4.syakai + student4.eigo;
      average = (student4.kokugo + student4.suugaku + student4.rika +
                 student4.syakai + student4.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student4.kokugo << ", ";
      text3();
      textSpace();
      cout << student4.suugaku << ", ";
      text4();
      textSpace();
      cout << student4.rika << ", ";
      text5();
      textSpace();
      cout << student4.syakai << ", ";
      text6();
      textSpace();
      cout << student4.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 5:
      text10();
      total = student5.kokugo + student5.suugaku + student5.rika +
              student5.syakai + student5.eigo;
      average = (student5.kokugo + student5.suugaku + student5.rika +
                 student5.syakai + student5.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student5.kokugo << ", ";
      text3();
      textSpace();
      cout << student5.suugaku << ", ";
      text4();
      textSpace();
      cout << student5.rika << ", ";
      text5();
      textSpace();
      cout << student5.syakai << ", ";
      text6();
      textSpace();
      cout << student5.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 6:
      text10();
      total = student6.kokugo + student6.suugaku + student6.rika +
              student6.syakai + student6.eigo;
      average = (student6.kokugo + student6.suugaku + student6.rika +
                 student6.syakai + student6.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student6.kokugo << ", ";
      text3();
      textSpace();
      cout << student6.suugaku << ", ";
      text4();
      textSpace();
      cout << student6.rika << ", ";
      text5();
      textSpace();
      cout << student6.syakai << ", ";
      text6();
      textSpace();
      cout << student6.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 7:
      text10();
      total = student7.kokugo + student7.suugaku + student7.rika +
              student7.syakai + student7.eigo;
      average = (student7.kokugo + student7.suugaku + student7.rika +
                 student7.syakai + student7.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student7.kokugo << ", ";
      text3();
      textSpace();
      cout << student7.suugaku << ", ";
      text4();
      textSpace();
      cout << student7.rika << ", ";
      text5();
      textSpace();
      cout << student7.syakai << ", ";
      text6();
      textSpace();
      cout << student7.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 8:
      text10();
      total = student8.kokugo + student8.suugaku + student8.rika +
              student8.syakai + student8.eigo;
      average = (student8.kokugo + student8.suugaku + student8.rika +
                 student8.syakai + student8.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student8.kokugo << ", ";
      text3();
      textSpace();
      cout << student8.suugaku << ", ";
      text4();
      textSpace();
      cout << student8.rika << ", ";
      text5();
      textSpace();
      cout << student8.syakai << ", ";
      text6();
      textSpace();
      cout << student8.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 9:
      text10();
      total = student9.kokugo + student9.suugaku + student9.rika +
              student9.syakai + student9.eigo;
      average = (student9.kokugo + student9.suugaku + student9.rika +
                 student9.syakai + student9.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student9.kokugo << ", ";
      text3();
      textSpace();
      cout << student9.suugaku << ", ";
      text4();
      textSpace();
      cout << student9.rika << ", ";
      text5();
      textSpace();
      cout << student9.syakai << ", ";
      text6();
      textSpace();
      cout << student9.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 10:
      text10();
      total = student10.kokugo + student10.suugaku + student10.rika +
              student10.syakai + student10.eigo;
      average = (student10.kokugo + student10.suugaku + student10.rika +
                 student10.syakai + student10.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student9.kokugo << ", ";
      text3();
      textSpace();
      cout << student9.suugaku << ", ";
      text4();
      textSpace();
      cout << student9.rika << ", ";
      text5();
      textSpace();
      cout << student9.syakai << ", ";
      text6();
      textSpace();
      cout << student9.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 11:
      text10();
      total = student11.kokugo + student11.suugaku + student11.rika +
              student11.syakai + student11.eigo;
      average = (student11.kokugo + student11.suugaku + student11.rika +
                 student11.syakai + student11.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student11.kokugo << ", ";
      text3();
      textSpace();
      cout << student11.suugaku << ", ";
      text4();
      textSpace();
      cout << student11.rika << ", ";
      text5();
      textSpace();
      cout << student11.syakai << ", ";
      text6();
      textSpace();
      cout << student11.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 12:
      text10();
      total = student12.kokugo + student12.suugaku + student12.rika +
              student12.syakai + student12.eigo;
      average = (student12.kokugo + student12.suugaku + student12.rika +
                 student12.syakai + student12.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student12.kokugo << ", ";
      text3();
      textSpace();
      cout << student12.suugaku << ", ";
      text4();
      textSpace();
      cout << student12.rika << ", ";
      text5();
      textSpace();
      cout << student12.syakai << ", ";
      text6();
      textSpace();
      cout << student12.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 13:
      text10();
      total = student13.kokugo + student13.suugaku + student13.rika +
              student13.syakai + student13.eigo;
      average = (student13.kokugo + student13.suugaku + student13.rika +
                 student13.syakai + student13.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student13.kokugo << ", ";
      text3();
      textSpace();
      cout << student13.suugaku << ", ";
      text4();
      textSpace();
      cout << student13.rika << ", ";
      text5();
      textSpace();
      cout << student13.syakai << ", ";
      text6();
      textSpace();
      cout << student13.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 14:
      text10();
      total = student14.kokugo + student14.suugaku + student14.rika +
              student14.syakai + student14.eigo;
      average = (student14.kokugo + student14.suugaku + student14.rika +
                 student14.syakai + student14.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student14.kokugo << ", ";
      text3();
      textSpace();
      cout << student14.suugaku << ", ";
      text4();
      textSpace();
      cout << student14.rika << ", ";
      text5();
      textSpace();
      cout << student14.syakai << ", ";
      text6();
      textSpace();
      cout << student14.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 15:
      text10();
      total = student15.kokugo + student15.suugaku + student15.rika +
              student15.syakai + student15.eigo;
      average = (student15.kokugo + student15.suugaku + student15.rika +
                 student15.syakai + student15.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student15.kokugo << ", ";
      text3();
      textSpace();
      cout << student15.suugaku << ", ";
      text4();
      textSpace();
      cout << student15.rika << ", ";
      text5();
      textSpace();
      cout << student15.syakai << ", ";
      text6();
      textSpace();
      cout << student15.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 16:
      text10();
      total = student16.kokugo + student16.suugaku + student16.rika +
              student16.syakai + student16.eigo;
      average = (student16.kokugo + student16.suugaku + student16.rika +
                 student16.syakai + student16.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student16.kokugo << ", ";
      text3();
      textSpace();
      cout << student16.suugaku << ", ";
      text4();
      textSpace();
      cout << student16.rika << ", ";
      text5();
      textSpace();
      cout << student16.syakai << ", ";
      text6();
      textSpace();
      cout << student16.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 17:
      text10();
      total = student17.kokugo + student17.suugaku + student17.rika +
              student17.syakai + student17.eigo;
      average = (student17.kokugo + student17.suugaku + student17.rika +
                 student17.syakai + student17.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student17.kokugo << ", ";
      text3();
      textSpace();
      cout << student17.suugaku << ", ";
      text4();
      textSpace();
      cout << student17.rika << ", ";
      text5();
      textSpace();
      cout << student17.syakai << ", ";
      text6();
      textSpace();
      cout << student17.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 18:
      text10();
      total = student18.kokugo + student18.suugaku + student18.rika +
              student18.syakai + student18.eigo;
      average = (student18.kokugo + student18.suugaku + student18.rika +
                 student18.syakai + student18.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student18.kokugo << ", ";
      text3();
      textSpace();
      cout << student18.suugaku << ", ";
      text4();
      textSpace();
      cout << student18.rika << ", ";
      text5();
      textSpace();
      cout << student18.syakai << ", ";
      text6();
      textSpace();
      cout << student18.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 19:
      text10();
      total = student19.kokugo + student19.suugaku + student19.rika +
              student19.syakai + student19.eigo;
      average = (student19.kokugo + student19.suugaku + student19.rika +
                 student19.syakai + student19.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student19.kokugo << ", ";
      text3();
      textSpace();
      cout << student19.suugaku << ", ";
      text4();
      textSpace();
      cout << student19.rika << ", ";
      text5();
      textSpace();
      cout << student19.syakai << ", ";
      text6();
      textSpace();
      cout << student19.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 20:
      text10();
      total = student20.kokugo + student20.suugaku + student20.rika +
              student20.syakai + student20.eigo;
      average = (student20.kokugo + student20.suugaku + student20.rika +
                 student20.syakai + student20.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student20.kokugo << ", ";
      text3();
      textSpace();
      cout << student20.suugaku << ", ";
      text4();
      textSpace();
      cout << student20.rika << ", ";
      text5();
      textSpace();
      cout << student20.syakai << ", ";
      text6();
      textSpace();
      cout << student20.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 21:
      text10();
      total = student21.kokugo + student21.suugaku + student21.rika +
              student21.syakai + student21.eigo;
      average = (student21.kokugo + student21.suugaku + student21.rika +
              student21.syakai + student21.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student21.kokugo << ", ";
      text3();
      textSpace();
      cout << student21.suugaku << ", ";
      text4();
      textSpace();
      cout << student21.rika << ", ";
      text5();
      textSpace();
      cout << student21.syakai << ", ";
      text6();
      textSpace();
      cout << student21.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 22:
      text10();
      total = student22.kokugo + student22.suugaku + student22.rika +
              student22.syakai + student22.eigo;
      average = (student22.kokugo + student22.suugaku + student22.rika +
              student22.syakai + student22.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student22.kokugo << ", ";
      text3();
      textSpace();
      cout << student22.suugaku << ", ";
      text4();
      textSpace();
      cout << student22.rika << ", ";
      text5();
      textSpace();
      cout << student22.syakai << ", ";
      text6();
      textSpace();
      cout << student22.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 23:
      text10();
      total = student23.kokugo + student23.suugaku + student23.rika +
              student23.syakai + student23.eigo;
      average = (student23.kokugo + student23.suugaku + student23.rika +
              student23.syakai + student23.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student23.kokugo << ", ";
      text3();
      textSpace();
      cout << student23.suugaku << ", ";
      text4();
      textSpace();
      cout << student23.rika << ", ";
      text5();
      textSpace();
      cout << student23.syakai << ", ";
      text6();
      textSpace();
      cout << student23.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 24:
      text10();
      total = student24.kokugo + student24.suugaku + student24.rika +
              student24.syakai + student24.eigo;
      average = (student24.kokugo + student24.suugaku + student24.rika +
              student24.syakai + student24.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student24.kokugo << ", ";
      text3();
      textSpace();
      cout << student24.suugaku << ", ";
      text4();
      textSpace();
      cout << student24.rika << ", ";
      text5();
      textSpace();
      cout << student24.syakai << ", ";
      text6();
      textSpace();
      cout << student24.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 25:
      text10();
      total = student25.kokugo + student25.suugaku + student25.rika +
              student25.syakai + student25.eigo;
      average = (student25.kokugo + student25.suugaku + student25.rika +
              student25.syakai + student25.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student25.kokugo << ", ";
      text3();
      textSpace();
      cout << student25.suugaku << ", ";
      text4();
      textSpace();
      cout << student25.rika << ", ";
      text5();
      textSpace();
      cout << student25.syakai << ", ";
      text6();
      textSpace();
      cout << student25.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 26:
      text10();
      total = student26.kokugo + student26.suugaku + student26.rika +
              student26.syakai + student26.eigo;
      average = (student26.kokugo + student26.suugaku + student26.rika +
              student26.syakai + student26.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student26.kokugo << ", ";
      text3();
      textSpace();
      cout << student26.suugaku << ", ";
      text4();
      textSpace();
      cout << student26.rika << ", ";
      text5();
      textSpace();
      cout << student26.syakai << ", ";
      text6();
      textSpace();
      cout << student26.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 27:
      text10();
      total = student27.kokugo + student27.suugaku + student27.rika +
              student27.syakai + student27.eigo;
      average = (student27.kokugo + student27.suugaku + student27.rika +
                 student27.syakai + student27.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student27.kokugo << ", ";
      text3();
      textSpace();
      cout << student27.suugaku << ", ";
      text4();
      textSpace();
      cout << student27.rika << ", ";
      text5();
      textSpace();
      cout << student27.syakai << ", ";
      text6();
      textSpace();
      cout << student27.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 28:
      text10();
      total = student28.kokugo + student28.suugaku + student28.rika +
              student28.syakai + student28.eigo;
      average = (student28.kokugo + student28.suugaku + student28.rika +
                 student28.syakai + student28.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student28.kokugo << ", ";
      text3();
      textSpace();
      cout << student28.suugaku << ", ";
      text4();
      textSpace();
      cout << student28.rika << ", ";
      text5();
      textSpace();
      cout << student28.syakai << ", ";
      text6();
      textSpace();
      cout << student28.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 29:
      text10();
      total = student29.kokugo + student29.suugaku + student29.rika +
              student29.syakai + student29.eigo;
      average = (student29.kokugo + student29.suugaku + student29.rika +
                 student29.syakai + student29.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student29.kokugo << ", ";
      text3();
      textSpace();
      cout << student29.suugaku << ", ";
      text4();
      textSpace();
      cout << student29.rika << ", ";
      text5();
      textSpace();
      cout << student29.syakai << ", ";
      text6();
      textSpace();
      cout << student29.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    case 30:
      text10();
      total = student30.kokugo + student30.suugaku + student30.rika +
              student30.syakai + student30.eigo;
      average = (student30.kokugo + student30.suugaku + student30.rika +
                 student30.syakai + student30.eigo) /5;
      cout << "学籍番号 " << bangou << ":";
      text2();
      textSpace();
      cout << student30.kokugo << ", ";
      text3();
      textSpace();
      cout << student30.suugaku << ", ";
      text4();
      textSpace();
      cout << student30.rika << ", ";
      text5();
      textSpace();
      cout << student30.syakai << ", ";
      text6();
      textSpace();
      cout << student30.eigo << ", ";
      text7();
      textSpace();
      cout << total << ", ";
      text9();
      textSpace();
      cout << (int)average << "\n" << endl;
      end--;
      break;
    default:
      cout << "入力された番号に該当する出席番号はありません\n" << endl;
    }
  }
}

int sNumber(int number) {
  int bangou = 1100 + number;
  return bangou;
}

void scoreFix(double *score) {
  int a, b, c, d, e, f;
  int end = 1;

  for (int i = 1; end > 0; i++) {

    textNumber();
    text1();
    cin >> a;

    if ((a > 0) && (a < 31)) {
      cout << "現在登録されている点数は\n";
      text2();
      textSpace();
      cout << score[a * 5 - 5] << "点, ";
      text3();
      textSpace();
      cout << score[a * 5 - 4] << "点, ";
      text4();
      textSpace();
      cout << score[a * 5 - 3] << "点, ";
      text5();
      textSpace();
      cout << score[a * 5 - 2] << "点, ";
      text6();
      textSpace();
      cout << score[a * 5 - 1] << "点, ";
      text7();
      textSpace();
      cout << score[a * 5 - 5] + score[a * 5 - 4] + score[a * 5 - 3] +
                  score[a * 5 - 2] + score[a * 5 - 1]
           << "点です。\n"
           << endl;
      end--;
    } else {
      text8();
    }
  }

  end++;

  for (int i = 1; end > 0; i++) {

    text2();
    textScore();
    text1();
    cin >> b;

    if ((b >= 0) && (b <= 100)) {
      score[a * 5 - 5] = (double)b;
      end--;
    } else {
      text8();
    }
  }

  end++;

  for (int i = 1; end > 0; i++) {

    text3();
    textScore();
    text1();
    cin >> c;

    if ((c >= 0) && (c <= 100)) {
      score[a * 5 - 4] = (double)c;
      end--;
    } else {
      text8();
    }
  }

  end++;

  for (int i = 1; end > 0; i++) {

    text4();
    textScore();
    text1();
    cin >> d;

    if ((d >= 0) && (d <= 100)) {
      score[a * 5 - 3] = (double)d;
      end--;
    } else {
      text8();
    }
  }

  end++;

  for (int i = 1; end > 0; i++) {

    text5();
    textScore();
    text1();
    cin >> e;

    if ((e >= 0) && (e <= 100)) {
      score[a * 5 - 2] = (double)e;
      end--;
    } else {
      text8();
    }
  }

  end++;

  for (int i = 1; end > 0; i++) {

    text6();
    textScore();
    text1();
    cin >> f;

    if ((f >= 0) && (f <= 100)) {
      score[a * 5 - 1] = (double)f;
      end--;
    } else {
      text8();
    }
  }

  textEnd();
}


void text1() { cout << "を入力してください。" << endl; }
void text2() { cout << "国語"; }
void text3() { cout << "数学"; }
void text4() { cout << "理科"; }
void text5() { cout << "社会"; }
void text6() { cout << "英語"; }
void text7() { cout << "合計"; }
void text8() { cout << "正しい"; }
void text9() { cout << "平均"; }
void text10() { cout << "入力された出席番号の成績を表示します\n例）学籍番号：国語,数学,理科,社会,英語,合計：,平均:" << endl; }
void textSpace() { cout << " "; }
void textNumber() { cout << "出席番号"; }
void textScore() { cout << "の点数"; }
void textEnd() { cout << "点数の修正が完了しました。\n" << endl; }