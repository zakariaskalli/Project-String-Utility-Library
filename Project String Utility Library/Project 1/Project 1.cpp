
#include <iostream>
#include <string>
#include "clsString.h"

using namespace std;


int main()

{
    clsString String1;
    clsString String2("Mohammed");

    String1.Value = "Ali Ahmed";

    cout << "String1 = " << String1.Value << endl;
    cout << "String2 = " << String2.Value << endl;

    // 1 CountWords

    cout << "\n\nNumber of words: " << String1.CountWords() << endl;

    cout << "Number of words: " << String1.CountWords("Fadi ahmed rateb omer") << endl;

    cout << "Number of words: " <<
        clsString::CountWords("Mohammed Saqer Abu-Hadhoud") << endl;

    // 2 PrintFirstLettersOfString

    cout << "\n\nFirst Letters Of String 1 : " 
        << String1.PrintFirstLettersOfString() << endl;

    cout << "First Letters Of String \"Manal Hakim Wasim\" : "
        << String1.PrintFirstLettersOfString("Manal Hakim Wasim") << endl;


    cout << "First Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::PrintFirstLettersOfString("Zakaria Skalli Houssaini") << endl;

    // 3 UpperFirstLetterOfEachWord

    String1.UpperFirstLetterOfEachWord();
    cout << "\n\nUpper First Letter Of String 1 : "
        << String1.Value << endl;
    
    cout << "Upper First Letter Of String \"manal hakim wasim\" : "
        << String1.UpperFirstLetterOfEachWord("manal hakim wasim") << endl;
    
    cout << "Upper First Letter Of String \"zakaria skalli houssaini\" : "
        << clsString::UpperFirstLetterOfEachWord("zakaria skalli houssaini") << "\n\n";

    // 4 LowerFirstLetterOfEachWord

    String1.LowerFirstLetterOfEachWord();
    cout << "\n\nLower First Letter Of String 1 : "
        << String1.Value << endl;

    cout << "Lower First Letter Of String \"Manal Hakim Wasim\" : "
        << String1.LowerFirstLetterOfEachWord("Manal Hakim Wasim") << endl;

    cout << "Lower First Letter Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::LowerFirstLetterOfEachWord("Zakaria Skalli Houssaini") << endl;

    // 5 UpperAllLetterOfString

    String1.UpperAllLetterOfString();
    cout << "\n\nUpper All Letters Of String 1 : "
        << String1.Value << endl;

    cout << "Upper All Letters Of String \"Manal Hakim Wasim\" : "
        << String1.UpperAllLetterOfString("Manal Hakim Wasim") << endl;

    cout << "Upper All Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::UpperAllLetterOfString("Zakaria Skalli Houssaini") << endl;

    // 6 LowerAllLetterOfString

    String1.LowerAllLetterOfString();
    cout << "\n\nLower All Letters Of String 1 : "
        << String1.Value << endl;

    cout << "Lower All Letters Of String \"Manal Hakim Wasim\" : "
        << String1.LowerAllLetterOfString("Manal Hakim Wasim") << endl;

    cout << "Lower All Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::LowerAllLetterOfString("Zakaria Skalli Houssaini") << endl;

    // 7 InvertAllLettersOfString

    String1.InvertAllLettersOfString();
    cout << "\n\nInvert All Letters Of String 1 : "
        << String1.Value << endl;

    cout << "Invert All Letters Of String \"Manal Hakim Wasim\" : "
        << String1.InvertAllLettersOfString("Manal Hakim Wasim") << endl;

    cout << "Invert All Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::InvertAllLettersOfString("Zakaria Skalli Houssaini") << endl;

    // 8 CountLetters

    cout << "\n\nCount Letters Of String 1 : "
        << String1.CountLetters() << endl;

    cout << "Count Letters Of String \"Manal Hakim Wasim\" : "
        << String1.CountLetters("Manal Hakim Wasim") << endl;

    cout << "Count Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountLetters("Zakaria Skalli Houssaini") << endl;

    // 9 Count Capital Letters

    cout << "\n\nCount Capital Letters Of String 1 : "
        << String1.CountCapitalLetters() << endl;

    cout << "Count Capital Letters Of String \"Manal Hakim Wasim\" : "
        << String1.CountCapitalLetters("Manal Hakim Wasim") << endl;

    cout << "Count Capital Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountCapitalLetters("Zakaria Skalli Houssaini") << endl;

    // 10 CountSmallLetters

    cout << "\n\nCount Small Letters Of String 1 : "
        << String1.CountSmallLetters() << endl;

    cout << "Count Small Letters Of String \"Manal Hakim Wasim\" : "
        << String1.CountSmallLetters("Manal Hakim Wasim") << endl;

    cout << "Count Small Letters Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountSmallLetters("Zakaria Skalli Houssaini") << endl;

    // 11 CountLettersDontMatchCase

    cout << "\n\nCount Letter 'A' Dont Match Case Of String 1 : "
        << String1.CountLettersDontMatchCase('A') << endl;

    cout << "Count Letters 'H' Dont Match Case Of String \"Manal Hakim Wasim\" : "
        << String1.CountLettersDontMatchCase("Manal Hakim Wasim", 'H') << endl;

    cout << "Count Letters 's' Dont Match Case Of String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountLettersDontMatchCase("Zakaria Skalli Houssaini", 's') << endl;

    // 12 CountLettersByMatchCase

    cout << "\n\nCount Letter 'A' By Match Case In String 1 : "
        << String1.CountLettersByMatchCase('A') << endl;

    cout << "Count Letters 'H' By Match Case In String \"Manal Hakim Wasim\" : "
        << String1.CountLettersByMatchCase("Manal Hakim Wasim", 'H') << endl;

    cout << "Count Letters 's' By Match Case In String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountLettersByMatchCase("Zakaria Skalli Houssaini", 's') << endl;

    // 13 CountVowelLetters

    cout << "\n\nCount Vowel Letters In String 1 : "
        << String1.CountVowelLetters() << endl;

    cout << "Count Vowel Letters In String \"Manal Hakim Wasim\" : "
        << String1.CountVowelLetters("Manal Hakim Wasim") << endl;

    cout << "Count Vowel Letters In String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountVowelLetters("Zakaria Skalli Houssaini") << endl;

    // 14 PrintAllVowelsInString

    cout << "\n\nPrint All Vowels In String 1 : "
        << String1.PrintAllVowelsInString() << endl;

    cout << "Print All Vowels In String \"Manal Hakim Wasim\" : "
        << String1.PrintAllVowelsInString("Manal Hakim Wasim") << endl;

    cout << "Print All Vowels In String \"Zakaria Skalli Houssaini\" : "
        << clsString::PrintAllVowelsInString("Zakaria Skalli Houssaini") << endl;

    // 15 PrintEachWordInString

    cout << "\n\nPrint All Vowels In String 1 : " << endl;
    String1.PrintEachWordInString();

    cout << "Print All Vowels In String \"Manal Hakim Wasim\" : " << endl;
    String1.PrintEachWordInString("Manal Hakim Wasim");

    cout << "Print All Vowels In String \"Zakaria Skalli Houssaini\" : " << endl;
    clsString::PrintEachWordInString("Zakaria Skalli Houssaini");

    // 16 CountEachWordInString

    cout << "\n\nCount Each Word In String 1 : "
        << String1.CountEachWordInString() << endl;

    cout << "Count Each Word In String \"Manal Hakim Wasim\" : "
        << String1.CountEachWordInString("Manal Hakim Wasim") << endl;

    cout << "Count Each Word In String \"Zakaria Skalli Houssaini\" : "
        << clsString::CountEachWordInString("Zakaria Skalli Houssaini") << endl;
    
    // 17 SplitString

    // 18 Trim Left / Right / Complet
    String1.Trim();
    cout << "\n\nTrim Word In String 1 : "
        << String1.Value << endl;

    cout << "Trim Left Word In String \"     Manal Hakim Wasim\" : "
        << String1.TrimLeft("    Manal Hakim Wasim") << endl;

    cout << "Trim Right Word In String \"Zakaria Skalli Houssaini    \" : "
        << clsString::Trim("Zakaria Skalli Houssaini    ") << endl;

    // 19 JoinString

    String1.JoinString("//**//");
    cout << "\n\nJoin String 1 delim(//**//) : "
        << String1.Value << endl;

    cout << "Trim Left Word In String \"     Manal Hakim Wasim\"  delim(//**//) : "
        << String1.JoinString(String1.SplitString("Manal Hakim Wasim"), "//**//") << endl;
    
    cout << "Trim Right Word In String \"Zakaria Skalli Houssaini  delim(//**//)   \" : "
        << clsString::JoinString(clsString::SplitString("Zakaria Skalli Houssaini"), "//**//") << endl;


    // 20 ReverseWordsInString

    String1.ReverseWordsInString();
    cout << "\n\nReverse Words In String 1 : "
        << String1.Value << endl;

    cout << "Reverse Words In String \"Manal Hakim Wasim\" : "
        << String1.ReverseWordsInString("Manal Hakim Wasim") << endl;

    cout << "Reverse Words In String \"Zakaria Skalli Houssaini\" : "
        << clsString::ReverseWordsInString("Zakaria Skalli Houssaini") << endl;

    // 21 ReplaceWordsInMatchCase

    String1.ReplaceWordsInMatchCase("Ali", "Alae");
    cout << "\n\nReplace Word (MatchCase) \"Ali\" par \"Alae\" In String 1 : "
        << String1.Value << endl;

    cout << "Replace Word (MatchCase) \"Manal\" par \"zaki\" In String \"Manal Hakim manal Manal Wasim\" : "
        << String1.ReplaceWordsInMatchCase("Manal Hakim manal Manal Wasim", "Manal", "zaki") << endl;

    cout << "Replace Word (MatchCase) \"Zakaria\" par \"Ziko\" In String \"Zakaria Skalli zakaria Houssaini Zakaria\" : "
        << clsString::ReplaceWordsInMatchCase("Zakaria Skalli zakaria Houssaini Zakaria", "Zakaria", "Ziko") << endl;

    // 22 ReplaceWordsDontMatchCase

    String1.ReplaceWordsDontMatchCase("Ali", "Alae");
    cout << "\n\nReplace Word (DontMatchCase) \"Ali\" par \"Alae\" In String 1 : "
        << String1.Value << endl;

    cout << "Replace Word (DontMatchCase) \"Manal\" par \"zaki\" In String \"Manal Hakim manal Manal Wasim\" : "
        << String1.ReplaceWordsDontMatchCase("Manal Hakim manal Manal Wasim", "Manal", "zaki") << endl;

    cout << "Replace Word (DontMatchCase) \"Zakaria\" par \"Ziko\" In String \"Zakaria Skalli zakaria Houssaini Zakaria\" : "
        << clsString::ReplaceWordsDontMatchCase("Zakaria Skalli zakaria Houssaini Zakaria", "Zakaria", "Ziko") << endl;
    
    // 23 RemovePunctuations

    String1.RemovePunctuations();
    cout << "\n\nRemove Punctuations In String 1 : "
        << String1.Value << endl;
    
    cout << "Remove Punctuations In String \"Manal, Hakim; Wa;sim,\" : "
        << String1.RemovePunctuations("Manal, Hakim; Wa;sim,") << endl;

    cout << "Remove Punctuations In String \"Zakaria, Skalli, Houssaini.\" : "
        << clsString::RemovePunctuations("Zakaria, Skalli, Houssaini.") << endl;

    // 24 PrintStringWithoutPunct

    String1.PrintStringWithoutPunct(",");
    cout << "\n\nPrint String Without Punct In String 1 : "
        << String1.Value << endl;

    cout << "Print String Without Punct In String \"Manal Hakim Wasim\" : "
        << String1.PrintStringWithoutPunct("Manal Hakim Wasim", ",") << endl;

    cout << "Print String Without Punct In String \"Zakaria Skalli Houssaini\" : "
        << clsString::PrintStringWithoutPunct("Zakaria Skalli Houssaini", ",") << endl;

    // 25 Length

    cout << "\n\nLength String 1 : "
        << String1.Length() << endl;

    cout << "Length String \"Manal Hakim Wasim\" : "
        << String1.Length("Manal Hakim Wasim") << endl;

    cout << "Length String \"Zakaria Skalli Houssaini\" : "
        << clsString::Length("Zakaria Skalli Houssaini") << endl;



    system("pause>0");
    return 0;
};

