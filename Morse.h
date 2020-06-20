class Morse{
private:
    char dot;
    char dash;
public:
    Morse();
    char getDot();
    char getDash();
    String translateSentence(String sentence);
    String translateLetter(char letter);
};

Morse::Morse(){
    dot = '.';
    dash = '-';
}

char Morse::getDot(){
    return dot;
}

char Morse::getDash(){
    return dash;
}

String Morse::translateSentence(String sentence){
    sentence.toLowerCase();
    String message = "";
    for (size_t i = 0; i < sentence.length(); i++)
    {
        message += translateLetter(sentence.charAt(i));
    }
    
    return message;
}

String Morse::translateLetter(char letter){
    String morseLetter = "";
    switch (letter){
    case ('a'):
        morseLetter = ".-";
        break;
        case ('b'):
        morseLetter = "-...";
        break;
        case ('c'):
        morseLetter = "-.-.";
        break;
        case ('d'):
        morseLetter = "-..";
        break;
        case ('e'):
        morseLetter = ".";
        break;
        case ('f'):
        morseLetter = "..-.";
        break;
        case ('g'):
        morseLetter = "--.";
        break;
        case ('h'):
        morseLetter = "....";
        break;
        case ('i'):
        morseLetter = "..";
        break;
        case ('j'):
        morseLetter = ".---";
        break;
        case ('k'):
        morseLetter = "-.-";
        break;
        case ('l'):
        morseLetter = ".-..";
        break;
        case ('m'):
        morseLetter = "--";
        break;
        case ('n'):
        morseLetter = "-.";
        break;
        case ('o'):
        morseLetter = "---";
        break;
        case ('p'):
        morseLetter = ".--.";
        break;
        case ('q'):
        morseLetter = "--.-";
        break;
        case ('r'):
        morseLetter = ".-.";
        break;
        case ('s'):
        morseLetter = "...";
        break;
        case ('t'):
        morseLetter = "-";
        break;
        case ('u'):
        morseLetter = "..-";
        break;
        case ('v'):
        morseLetter = "...-";
        break;
        case ('w'):
        morseLetter = ".--";
        break;
        case ('x'):
        morseLetter = "-..-";
        break;
        case ('y'):
        morseLetter = "-.--";
        break;
        case ('z'):
        morseLetter = "--..";
        break;
        case ('0'):
        morseLetter = "-----";
        break;
        case ('1'):
        morseLetter = ".----";
        break;
        case ('2'):
        morseLetter = "..---";
        break;
        case ('3'):
        morseLetter = "...--";
        break;
        case ('4'):
        morseLetter = "....-";
        break;
        case ('5'):
        morseLetter = ".....";
        break;
        case ('6'):
        morseLetter = "-....";
        break;
        case ('7'):
        morseLetter = "--...";
        break;
        case ('8'):
        morseLetter = "---..";
        break;
        case ('9'):
        morseLetter = "----.";
        break;
        case (' '):
        morseLetter = "";
        break;
        
    
    default:
        break;
    }

    return morseLetter + " ";
}



