#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
/*
  vector<string> 入力された文字を入れる。
//（可能なら) ランダムで最初の文字を決定
  cout << "ルール説明"
  while(単語に「ん」がついてない) 
  {
  cout << "単語入力を促す"
  cin >> 入力された単語
  if(前の単語の最後の文字 != 単語の最初の文字)
    {
      cout << "初めの文字が違う"
    }
  if(入力された単語 = 今までに出た単語)
    {
      cout << "単語がかぶっている"
      ++ミスカウント
    }
  }
  if(!単語にんがついていない)
  {
    cout << "んがついたので負け"
  }
  else 
  {
    cout << "三回かぶったので負け"
  }
*/ 
  
    vector<string> word;
    string current;
    int count = 0;
    string NG_WORD = "n";
    string lastCh;
    string initCh;
    int lastWordsize;
    cout << "単語をアルファベットで入力してね。\n";
    cin >> current;
    word.push_back(current);  
    initCh = word[count].substr(0,1);
    ++count;
  while((lastCh != NG_WORD) && (count < 10))
  {
    cin >> current;
    word.push_back(current);  
    initCh = word[count].substr(0,1);
    lastWordsize = word[count-1].size();    
    lastCh = word[count-1].substr(lastWordsize-1,1);
    if(lastCh != initCh)
    {
      cout << lastCh << " から始まる言葉にしてね。\n";
      continue;
    }
    cout << current << endl;
    ++count;
  }
  if(lastCh == NG_WORD)
  {
    cout << "んがついたので負け\n";
  }

  if(count == 10)
  {
    cout << "おめでとう！10回続いたね！\n";
  }
  

/*  while(missCount < MAX_WRONG)
    {
      cout << "次の単語をひらがなで入力してね。\n";
      
    }
 */ 
}