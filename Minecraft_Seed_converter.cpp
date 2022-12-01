//Importing any C++ libraries that I might need over the course of the project.
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <array>
#include <vector>
#include <cstdint>
#include <sstream>
#include <memory>
#include <memory_resource>
#include <new>

//Specifically stating which functions within the aforementioned libraries I'm going to be using.
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::getline;
using std::array;

//This is where the code will start executing from.
int main() {

//Declaring any integer variables that I will need before anything else is declared. Initializing to zero is optional, but helps to mitigate random shit during runtime since they're set to a known value.
int FirstSeedNumber = 0;
int SecondSeedNumber = 0;
int ThirdSeedNumber = 0;
int FourthSeedNumber = 0;
int FifthSeedNumber = 0;
int SixthSeedNumber = 0;
int SeventhSeedNumber = 0;
int EighthSeedNumber = 0;
int NinthSeedNumber = 0;
int TenthSeedNumber = 0;
int EleventhSeedNumber = 0;
int TwelvethSeedNumber = 0;
int ThirteenthSeedNumber = 0;
int FourteenthSeedNumber = 0;
int FifteenthSeedNumber = 0;
int SixteenthSeedNumber = 0;
int SeventeenthSeedNumber = 0;
int EighteenthSeedNumber = 0;
int NineteenthSeedNumber = 0;
int TwentiethSeedNumber = 0;
int TwentyfirstSeedNumber = 0;
int TwentysecondSeedNumber = 0;
int TwentythirdSeedNumber = 0;
int TwentyfourthSeedNumber = 0;
int TwentyfifthSeedNumber = 0;
int TwentysixthSeedNumber = 0;
int TwentyseventhSeedNumber = 0;
int TwentyeighthSeedNumber = 0;
int TwentyninthSeedNumber = 0;
int ThirtiethSeedNumber = 0;
int ThirtyFirstSeedNumber = 0;
int ThirtySecondSeedNumber = 0;
int ThirtyThirdSeedNumber = 0;
int ThirtyFourthSeedNumber = 0;
int ThirtyFifthSeedNumber = 0;
int ThirtySixthSeedNumber = 0;
int ThirtySeventhSeedNumber = 0;
int ThirtyEighthSeedNumber = 0;
int ThirtyNinthSeedNumber = 0;
int FortiethSeedNumber = 0;
int FortyFirstSeedNumber = 0;
int FortySecondSeedNumber = 0;
int FortyThirdSeedNumber = 0;
int FortyFourthSeedNumber = 0;
int FortyFifthSeedNumber = 0;
int FortySixthSeedNumber = 0;
int FortySeventhSeedNumber = 0;
int FortyEighthSeedNumber = 0;
int FortyNinthSeedNumber = 0;
int FiftiethSeedNumber = 0;
int FiftyFirstSeedNumber = 0;
int FiftySecondSeedNumber = 0;
int FiftyThirdSeedNumber = 0;
int FiftyFourthSeedNumber = 0;
int FiftyFifthSeedNumber = 0;
int FiftySixthSeedNumber = 0;
int FiftySeventhSeedNumber = 0;
int FiftyEighthSeedNumber = 0;
int FiftyNinthSeedNumber = 0;
int SixtiethSeedNumber = 0;
int SixtyFirstSeedNumber = 0;
int SixtySecondSeedNumber = 0;
int SixtyThirdSeedNumber = 0;
int SixtyFourthSeedNumber = 0;
int SixtyFifthSeedNumber = 0;
int SixtySixthSeedNumber = 0;
int SixtySeventhSeedNumber = 0;
int SixtyEighthSeedNumber = 0;
int SixtyNinthSeedNumber = 0;
int SeventiethSeedNumber = 0;

//Declaring the entirety of the American English Alphabet letter by letter so the compiler won't bitch about shit not being declared.
string Exit;
string a;
string b;
string c;
string d;
string e;
string f;
string g;
string h;
string i;
string j;
string k;
string l;
string m;
string n;
string o;
string p;
string q;
string r;
string s;
string t;
string u;
string v;
string w;
string x;
string y;
string z;
string A;
string B;
string C;
string D;
string E;
string F;
string G;
string H;
string I;
string J;
string K;
string L;
string M;
string N;
string O;
string P;
string Q;
string R;
string S;
string T;
string U;
string V;
string W;
string X;
string Y;
string Z;

//String declarations for the seeds themselves.
string TV = "TV";
string to = "to";
string my = "my";
string it = "it";
string Woo = "Woo";
string NotDicks = "2pp";
string Put = "Put";
string GNU = "GNU";
string The = "The";
string Plz = "Plz";
string Stay = "Stay";
string Less = "Less";
string than = "than";
string reply = "reply";
string tweet = "tweet";
string strong = "strong";
string Complex = "Complex";
string cellular = "cellular";
string automata = "automata";
string Peter = "Peter";
string Griffin = "Griffin";
string little = "little";
string fence = "fence";
string around = "around";
string Terry = "Terry";
string Pratchett = "Pratchett";
string Technically = "Technically";
string Monster = "Monster";
string infighting = "infighting";
string addictive = "addictive";
string Tropes = "Tropes";
string Exploding = "Exploding";
string creepers = "creepers";
string somethingawful = "somethingawful";
string Doesnt = "Doesn't";
string avoid = "avoid";
string NotAnumber = "double";
string negatives = "negatives";
string Feature = "Feature";
string packed = "packed";
string sum = "sum";
string of = "of";









//Individual characters needed for the arrays below.
string ExclamationPoint = "!";
string Space = " ";
string Comma = ",";
string Apostrophe = "'";
string Period = ".";

//Declaring each seed as an array of characters so appropriate memory is allocated. The number in the square brackets is the amount of bytes that each string takes up in memory. Sorted in decreasing amounts of memory required for each array so the memory allocations are compiled in the correct order.
string FiftiethSeedArray[37] = {T, h, r, o, w, " ", y, o, u, r, s, e, l, f, " ", a, t, " ", t, h, e, " ", g, r, o, u, n, d, " ", a, n, d, " ", m, i, s, s};
string ThirtiethSeedArray[34] = {H, a, n, g, " ", o, u, t, " ", w, i, t, h, " ", y, o, u, r, " ", f, r, i, e, n, d, s, " ", o, n, l, i, n, e, "!"};
string FortyThirdSeedArray[31] = {N, o, w, " ", o, n, " ", O, p, e, n, G, L, " ", "3", ".", "2", " ", c, o, r, e, " ", p, r, o, f, i, l, e, "!"};
string SixtyFourthSeedArray[31] = {D, o, e, s, n, "'", t, " ", a, v, o, i, d, " ", d, o, u, b, l, e, " ", n, e, g, a, t, i, v, e, s, "!"};
string SixtyFirstSeedArray[30] = {L, e, s, s, " ", a, d, d, i, c, t, i, v, e, " ", t, h, a, n, " ", T, V, " ", T, r, o, p, e, s, "!"};
string EleventhSeedArray[29] = {P, u, t, " ", a, " ", l, i, t, t, l, e, " ", f, e, n, c, e, " ", a, r, o, u, n, d, " ", i, t, "!"};
string ThirtyNinthSeedArray[26] = {H, o, n, e, y, ",", " ", I, " ", w, a, x, e, d, " ", t, h, e, " ", c, o, p, p, e, r, "!"};
string SixthSeedArray[26] = {C, o, m, p, l, e, x, " ", c, e, l, l, u, l, a, r, " ", a, u, t, o, m, a, t, a, "!"};
string FiftyFifthSeedArray[25] = {S, t, a, y, " ", h, o, m, e, " ", a, n, d, " ", p, l, a, y, " ", g, a, m, e, s, "!"};
string SixtyNinthSeedArray[24] = {E, n, v, i, s, i, o, n, "!", " ", C, r, e, a, t, e, "!", " ", S, h, a, r, e, "!"};
string TwentythirdSeedArray[24] = {T, h, r, o, w, " ", a, " ", b, l, a, n, k, e, t, " ", o, v, e, r, " ", i, t, "!"};
string FiftyEighthSeedArray[23] = {D, u, n, g, e, o, n, Q, u, e, s, t, " ", i, s, " ", u, n, f, a, i, r, "!"};
string ThirtyThirdSeedArray[23] = {T, e, c, h, n, o, b, l, a, d, e, " ", n, e, v, e, r, " ", d, i, e, s, "!"};
string FortySecondSeedArray[22] = {R, u, n, ",", " ", c, o, w, a, r, d, "!", " ", I, " ", h, u, n, g, e, r, "!"};
string FourthSeedArray[22] = {P, l, z, " ", r, e, p, l, y, " ", t, o, " ", m, y, " ", t, w, e, e, t, "!"};
string TwentyseventhSeedArray[22] = {M, a, d, e, " ", b, y, " ", "'", r, e, a, l, "'", " ", p, e, o, p, l, e, "!"};
string FourteenthSeedArray[21] = {N, o, t, " ", a, s, " ", c, o, o, l, " ", a, s, " ", S, p, o, c, k, "!"};
string SixteenthSeedArray[21] = {T, h, e, " ", s, u, m, " ", o, f, " ", i, t, s, " ", p, a, r, t, s, "!"};
string FortyFifthSeedArray[21] = {B, T, A, F, " ", u, s, e, d, " ", t, o, " ", b, e, " ", g, o, o, d, "!"};
string FortySixthSeedArray[20] = {V, e, r, l, e, t, " ", I, n, t, r, e, g, r, a, t, i, o, n, "!"};
string ThirtyFourthSeedArray[20] = {I, " ", n, e, e, d, " ", m, o, r, e, " ", c, o, n, t, e, x, t, "."};
string TwentyeighthSeedArray[20] = {M, i, l, l, i, o, n, s, " ", o, f, " ", p, e, a, c, h, e, s, "!"};
string TwentyninthSeedArray[20] = {A, l, l, " ", r, u, m, o, r, s, " ", a, r, e, " ", t, r, u, e, "!"};
string FiftyFirstSeedArray[20] = {K, i, n, d, a, " ", l, i, k, e, " ", L, e, m, m, i, n, g, s, "!"};
string SixtyThirdSeedArray[20] = {W, o, o, ",", " ", s, o, m, e, t, h, i, n, g, a, w, f, u, l, "!"};
string SixtyFifthSeedArray[20] = {"1", "2", " ", h, e, r, b, s, " ", a, n, d, " ", s, p, i, c, e, s, "!"};
string SixtiethSeedArray[19] = {M, o, n, s, t, e, r, " ", i, n, f, i, g, h, t, i, n, g, "!"};
string SixtySecondSeedArray[19] = {E, x, p, l, o, d, i, n, g, " ", c, r, e, e, p, e, r, s, "!"};
string SixtySeventhSeedArray[19] = {M, o, r, e, " ", t, h, a, n, " ", "5", "0", "0", " ", s, o, l, d, "!"};
string TwentiethSeedArray[19] = {J, a, v, a, l, i, c, i, o, u, s, " ", e, d, i, t, i, o, n};
string ThirtyFifthSeedArray[19] = {R, e, g, i, o, n, a, l, " ", r, e, s, o, u, r, c, e, s, "!"};
string FiftySixthSeedArray[19] = {G, N, U, " ", T, e, r, r, y, " ", P, r, a, t, c, h, e, t, t};
string ThirteenthSeedArray[18] = {T, e, l, l, " ", y, o, u, r, " ", f, r, i, e, n, d, s, "!"};
string SixtyEighthSeedArray[18] = {K, i, c, k, " ", i, t, " ", r, o, o, t, " ", d, o, w, n, "!"};
string SeventiethSeedArray[17] = {M, a, y, " ", c, o, n, t, a, i, n, " ", n, u, t, s, "!"};
string TwelvethSeedArray[17] = {T, e, c, h, n, i, c, a, l, l, y, " ", g, o, o, d, "!"};
string ThirtySeventhSeedArray[17] = {M, y, " ", l, i, f, e, " ", f, o, r, " ", A, i, u, r, "!"};
string ThirtySixthSeedArray[16] = {T, a, k, e, " ", h, e, r, " ", p, i, l, l, o, w, "!"};
string TenthSeedArray[16] = {R, e, a, d, " ", m, o, r, e, " ", b, o, o, k, s, "!"};
string NineteenthSeedArray[16] = {C, l, o, u, d, " ", c, o, m, p, u, t, i, n, g, "!"};
string FortyEighthSeedArray[16] = {T, h, e, " ", b, e, e, "'", s, " ", k, n, e, e, s, "!"};
string FifteenthSeedArray[15] = {F, e, a, t, u, r, e, " ", p, a, c, k, e, d, "!"};
string ThirtySecondSeedArray[15] = {M, a, d, e, " ", i, n, " ", S, w, e, d, e, n, "!"};
string FortiethSeedArray[15] = {S, o, a, p, " ", a, n, d, " ", w, a, t, e, r, "!"};
string FortySeventhSeedArray[15] = {B, e, " ", a, n, t, i, "-", r, a, c, i, s, t, "!"};
string SeventhSeedArray[14] = {P, e, t, e, r, " ", G, r, i, f, f, i, n, "!"};
string FortyNinthSeedArray[14] = {M, e, n, g, e, r, " ", s, p, o, n, g, e, "!"};
string FiftyFourthSeedArray[14] = {I, n, s, p, i, r, a, t, i, o, n, a, l, "!"};
string FiftySecondSeedArray[13] = {T, e, s, t, i, f, i, c, a, t, e, s, "!"};
string FiftyThirdSeedArray[13] = {R, i, d, e, " ", t, h, e, " ", p, i, g, "!"};
string ThirdSeedArray[13] = {C, o, n, v, e, n, t, i, o, n, a, l, "!"};
string TwentyfifthSeedArray[13] = {W, a, t, e, r, " ", b, o, t, t, l, e, "!"};
string TwentyfirstSeedArray[13] = {P, r, e, t, t, y, " ", s, c, a, r, y, "!"};
string TwentysecondSeedArray[13] = {S, i, n, g, l, e, p, l, a, y, e, r, "!"};
string ThirtyEighthSeedArray[13] = {T, h, a, t, "'", s, " ", s, u, p, e, r, "!"};
string SixtySixthSeedArray[12] = {I, t, "'", s, " ", a, " ", g, a, m, e, "!"};
string ThirtyFirstSeedArray[12] = {B, r, i, n, g, " ", i, t, " ", o, n, "!"};
string FifthSeedArray[12] = {S, t, a, y, " ", s, t, r, o, n, g, "!"};
string NinthSeedArray[12] = {W, o, o, ",", " ", r, e, d, d, i, t, "!"};
string FortyFirstSeedArray[11] = {U, s, e, s, " ", L, W, J, G, L, "!"};
string FirstSeedArray[11] = {S, y, n, e, c, d, o, c, h, e, "!"};
string TwentyfourthSeedArray[11] = {H, e, l, o, " ", C, y, m, r, u, "!"};
string TwentysixthSeedArray[11] = {M, a, t, t, " ", D, a, m, o, n, "!"};
string FortyFourthSeedArray[11] = {"2", "0", " ", G, O, T, O, " ", "1", "0", "!"};
string FiftyNinthSeedArray[11] = {U, n, d, e, f, e, a, t, e, d, "!"};
string FiftySeventhSeedArray[9] = {E, n, h, a, n, c, e, d, "!"};
string EighthSeedArray[9] = {W, o, o, " ", "2", p, p, "!"};
string SeventeenthSeedArray[9] = {B, o, a, t, s, " ", F, T, W};
string SecondSeedArray[8] = {V, a, n, i, l, l, a, "!"};
string EighteenthSeedArray[6] = {F, n, o, r, d, "!"};
string SeventyFirstSeedArray[15] = {M, i, n, o, r, s, " ", w, e, l, c, o, m, e, "!"};
string SeventySecondSeedArray[21] = {W, e, l, c, o, m, e, " ", t, o, " ", y, o, u, r, " ", D, o, o, m, "!"};
string SeventyThirdSeedArray[16] = {C, o, g, i, t, o, " ", e, r, g, o, " ", s, u, m, "!"};


//String declarations for the inputs of each question down below.
string FirstSeed;
string SecondSeed;
string ThirdSeed;
string FourthSeed;
string FifthSeed;
string SixthSeed;
string SeventhSeed;
string EighthSeed;
string NinthSeed;
string TenthSeed;
string EleventhSeed;
string TwelvethSeed;
string ThirteenthSeed;
string FourteenthSeed;
string FifteenthSeed;
string SixteenthSeed;
string SeventeenthSeed;
string EighteenthSeed;
string NineteenthSeed;
string TwentiethSeed;
string TwentyFirstSeed;
string TwentySecondSeed;
string TwentyThirdSeed;
string TwentyFourthSeed;
string TwentyFifthSeed;
string TwentySixthSeed;
string TwentySeventhSeed;
string TwentyEighthSeed;
string TwentyNinthSeed;
string ThirtiethSeed;
string ThirtyFirstSeed;
string ThirtySecondSeed;
string ThirtyThirdSeed;
string ThirtyFourthSeed;
string ThirtyFifthSeed;
string ThirtySixthSeed;
string ThirtySeventhSeed;
string ThirtyEighthSeed;
string ThirtyNinthSeed;
string FortiethSeed;
string FortyFirstSeed;
string FortySecondSeed;
string FortyThirdSeed;
string FortyFourthSeed;
string FortyFifthSeed;
string FortySixthSeed;
string FortySeventhSeed;
string FortyEighthSeed;
string FortyNinthSeed;
string FiftiethSeed;
string FiftyFirstSeed;
string FiftySecondSeed;
string FiftyThirdSeed;
string FiftyFourthSeed;
string FiftyFifthSeed;
string FiftySixthSeed;
string FiftySeventhSeed;
string FiftyEighthSeed;
string FiftyNinthSeed;
string SixtiethSeed;
string SixtyFirstSeed;
string SixtySecondSeed;
string SixtyThirdSeed;
string SixtyFourthSeed;
string SixtyFifthSeed;
string SixtySixthSeed;
string SixtySeventhSeed;
string SixtyEighthSeed;
string SixtyNinthSeed;
string SeventiethSeed;

string SeventyFirstSeed;
string SeventySecondSeed;
string SeventyThirdSeed;
string SeventyFourthSeed;
string SeventyFifthSeed;
string SeventySixthSeed;
string SeventySeventhSeed;
string SeventyEighthSeed;
string SeventyNinthSeed;
string EightiethSeed;



/*
Seed Conversion:

X * 31 ^ Y



*/





//Temporarily declaring arrays right here before moving them to the main block of array declarations up above. This is so it is more convenient to write.
string SeventyFourthSeedArray;
string SeventyFifthSeedArray;
string SeventySixthSeedArray;
string SeventySeventhSeedArray;
string SeventyEighthSeedArray;
string SeventyNinthSeedArray;
string EightiethSeedArray;




//Seeds to be put into arrays.
/*
What's the question?
Play him off, keyboard cat!
Fan fiction!
Mmmph, mmph!
Finger-licking!
In case it isn't obvious, foxes aren't players.
Follow the train, CJ!
*/



//Additional integer variables declared here for the time being. These will be moved up to the top along with the other integer declarations.
int SeventyFirstSeedNumber = 0;
int SeventySecondSeedNumber = 0;
int SeventyThirdSeedNumber = 0;
int SeventyFourthSeedNumber = 0;
int SeventyFifthSeedNumber = 0;
int SeventySixthSeedNumber = 0;
int SeventySeventhSeedNumber = 0;
int SeventyEighthSeedNumber = 0;
int SeventyNinthSeedNumber = 0;
int EightiethSeedNumber = 0;

//Outputs the memory address of each array.
cout << FirstSeedArray << endl;
cout << SecondSeedArray << endl;
cout << ThirdSeedArray << endl;
cout << FourthSeedArray << endl;
cout << FifthSeedArray << endl;
cout << SixthSeedArray << endl;
cout << SeventhSeedArray << endl;
cout << EighthSeedArray << endl;
cout << NinthSeedArray << endl;
cout << TenthSeedArray << endl;
cout << EleventhSeedArray << endl;
cout << TwelvethSeedArray << endl;
cout << ThirteenthSeedArray << endl;
cout << FourteenthSeedArray << endl;
cout << FifteenthSeedArray << endl;
cout << SixteenthSeedArray << endl;
cout << SeventeenthSeedArray << endl;
cout << EighteenthSeedArray << endl;
cout << NineteenthSeedArray << endl;
cout << TwentiethSeedArray << endl;
cout << TwentyfirstSeedArray << endl;
cout << TwentysecondSeedArray << endl;
cout << TwentythirdSeedArray << endl;
cout << TwentyfourthSeedArray << endl;
cout << TwentyfifthSeedArray << endl;
cout << TwentysixthSeedArray << endl;
cout << TwentyseventhSeedArray << endl;
cout << TwentyeighthSeedArray << endl;
cout << TwentyninthSeedArray << endl;
cout << ThirtiethSeedArray << endl;
cout << ThirtyFirstSeedArray << endl;
cout << ThirtySecondSeedArray << endl;
cout << ThirtyThirdSeedArray << endl;
cout << ThirtyFourthSeedArray << endl;
cout << ThirtyFifthSeedArray << endl;
cout << ThirtySixthSeedArray << endl;
cout << ThirtySeventhSeedArray << endl;
cout << ThirtyEighthSeedArray << endl;
cout << ThirtyNinthSeedArray << endl;
cout << FortiethSeedArray << endl;
cout << FortyFirstSeedArray << endl;
cout << FortySecondSeedArray << endl;
cout << FortyThirdSeedArray << endl;
cout << FortyFourthSeedArray << endl;
cout << FortyFifthSeedArray << endl;
cout << FortySixthSeedArray << endl;
cout << FortySeventhSeedArray << endl;
cout << FortyEighthSeedArray << endl;
cout << FortyNinthSeedArray << endl;
cout << FiftiethSeedArray << endl;
cout << FiftyFirstSeedArray << endl;
cout << FiftySecondSeedArray << endl;
cout << FiftyThirdSeedArray << endl;
cout << FiftyFourthSeedArray << endl;
cout << FiftyFifthSeedArray << endl;
cout << FiftySixthSeedArray << endl;
cout << FiftySeventhSeedArray << endl;
cout << FiftyEighthSeedArray << endl;
cout << FiftyNinthSeedArray << endl;
cout << SixtiethSeedArray << endl;
cout << SixtyFirstSeedArray << endl;
cout << SixtySecondSeedArray << endl;
cout << SixtyThirdSeedArray << endl;
cout << SixtyFourthSeedArray << endl;
cout << SixtyFifthSeedArray << endl;
cout << SixtySixthSeedArray << endl;
cout << SixtySeventhSeedArray << endl;
cout << SixtyEighthSeedArray << endl;
cout << SixtyNinthSeedArray << endl;
cout << SeventiethSeedArray << endl;
cout << SeventyFirstSeedArray << endl;
cout << SeventySecondSeedArray << endl;
cout << SeventyThirdSeedArray << endl;
cout << SeventyFourthSeedArray << endl;
cout << SeventyFifthSeedArray << endl;
cout << SeventySixthSeedArray << endl;
cout << SeventySeventhSeedArray << endl;
cout << SeventyEighthSeedArray << endl;
cout << SeventyNinthSeedArray << endl;
cout << EightiethSeedArray << endl;


cout << "What is the First Seed That You Want to Convert" << "?" << endl;
cin >> FirstSeed;

FirstSeedNumber = -1810686126;

if (FirstSeed == "Synecdoche!") {
cout << "Your First Seed is" << ":" << " " << FirstSeedNumber << endl; }

cout << "What is the Second Seed That You Want to Convert" << "?" << endl;
cin >> SecondSeed;

SecondSeedNumber = -1299122138;

if (SecondSeed == "Vanilla!") {
cout << "Your Second Seed is" << ":" << " " << SecondSeedNumber << endl; }

cout << "What is the Third Seed That You Want to Convert" << "?" << endl;
cin >> ThirdSeed;

ThirdSeedNumber = 704695333;

if (ThirdSeed == "Conventional!") {
cout << "Your Third Seed is" << ":" << " " << ThirdSeedNumber << endl; }

cout << "What is the Fourth Seed That You Want to Convert" << "?" << endl;
cin >> FourthSeed;

FourthSeedNumber = 841911383;

if ((FourthSeed) == "Plz" && " " && "reply" && " " && "to" && " " && "my" && " " && "tweet!") {
cout << "Your Fourth Seed is" << ":" << " " << FourthSeedNumber << endl; }

cout << "What is the Fifth Seed That You Want to Convert" << "?" << endl;
cin >> FifthSeed;

FifthSeedNumber = 644147651;

if ((FifthSeed) == "Stay" && " " && "strong!") {
cout << "Your Fifth Seed is" << ":" << " " << FifthSeedNumber << endl; }

cout << "What is the Sixth Seed That You Want to Convert" << "?" << endl;
cin >> SixthSeed;

SixthSeedNumber = 2036351819;

if ((SixthSeed) == "Complex" && " " && "cellular" && " " && "automata!") {
cout << "Your Sixth Seed is" << ":" << " " << SixthSeedNumber << endl; }

cout << "What is the Seventh Seed That You Want to Convert" << "?" << endl;
cin >> SeventhSeed;

SeventhSeedNumber = 1374701714;

if ((SeventhSeed) == "Peter" && " " && "Griffin!") {
cout << "Your Seventh Seed is" << ":" << " " << SeventhSeedNumber << endl; }

cout << "What is the Eighth Seed That You Want to Convert" << "?" << endl;
cin >> EighthSeed;

EighthSeedNumber = -1431799974;

if ((EighthSeed) == "Woo" && "," && " " && "2pp!") {
cout << "Your Eighth Seed is" << ":" << " " << EighthSeedNumber << endl; }

cout << "What is the Ninth Seed That You Want to Convert" << "?" << endl;
cin >> NinthSeed;

NinthSeedNumber = -791050504;

if ((NinthSeed) == "Woo" && "," && " " && "reddit!") {
cout << "Your Ninth Seed is" << ":" << " " << NinthSeedNumber << endl; }

cout << "What is the Tenth Seed That You Want to Convert" << "?" << endl;
cin >> TenthSeed;

TenthSeedNumber = 143752824;

if ((TenthSeed) == "Read" && " " && "more" && " " && "books!") {
cout << "Your Tenth Seed is" << ":" << " " << TenthSeedNumber << endl; }

cout << "What is the Eleventh Seed That You Want to Convert" << "?" << endl;
cin >> EleventhSeed;

EleventhSeedNumber = 549314060;

if ((EleventhSeed) == "Put" && " " && "a" && " " && "little" && " " && "fence" && " " && "around" && " " && "it!") {
cout << "Your Eleventh Seed is" << ":" << " " << EleventhSeedNumber << endl; }

cout << "What is the Twelveth Seed That You Want to Convert" << "?" << endl;
cin >> TwelvethSeed;

TwelvethSeedNumber = 1574333678;

if ((TwelvethSeed) == "Technically" && " " && "good!") {
cout << "Your Twelveth Seed is" << ":" << " " << TwelvethSeedNumber << endl; }

cout << "What is the Thirteenth Seed That You Want to Convert" << "?" << endl;
cin >> ThirteenthSeed;

ThirteenthSeedNumber = -1147073430;

if ((ThirteenthSeed) == "Tell" && " " && "your" && " " && "friends!") {
cout << "Your Thirteenth Seed is" << ":" << " " << ThirteenthSeedNumber << endl; }

cout << "What is the Fourteenth Seed That You Want to Convert" << "?" << endl;
cin >> FourteenthSeed;

FourteenthSeedNumber = -1515550977;

if ((FourteenthSeed) == "Not" && " " && "as" && " " && "cool" && " " && "as" && " " && "Spock!") {
cout << "Your Fourteenth Seed is" << ":" << " " << FourteenthSeedNumber << endl; }

cout << "What is the Fifteenth Seed That You Want to Convert" << "?" << endl;
cin >> FifteenthSeed;

FifteenthSeedNumber = -1427588257;

if ((FifteenthSeed) == "Feature" && " " && "packed!") {
cout << "Your Fifteenth Seed is" << ":" << " " << FifteenthSeedNumber << endl; }

cout << "What is the Sixteenth Seed That You Want to Convert" << "?" << endl;
cin >> SixteenthSeed;

SixteenthSeedNumber = 1231855230;

if ((SixteenthSeed) == "The" && " " && "sum" && " " && "of" && " " && "its" && " " && "parts" && "!") {
cout << "Your Sixteenth Seed is" << ":" << " " << SixteenthSeedNumber << endl; }

cout << "What is the Seventeenth Seed That You Want to Convert" << "?" << endl;
cin >> SeventeenthSeed;

SeventeenthSeedNumber = 467262140;

if ((SeventeenthSeed) == "Boats" && " " && "FTW") {
cout << "Your Seventeenth Seed is" << ":" << " " << SeventeenthSeedNumber << endl; }

cout << "What is the Eighteenth Seed That You Want to Convert" << "?" << endl;
cin >> EighteenthSeed;

EighteenthSeedNumber = 2109047368;

if (EighteenthSeed == "Fnord!") {
cout << "Your Eighteenth Seed is" << ":" << " " << EighteenthSeedNumber << endl; }

cout << "What is the Nineteenth Seed That You Want to Convert" << "?" << endl;
cin >> NineteenthSeed;

NineteenthSeedNumber = 1890397784;

if (NineteenthSeed == "Cloud computing!") {
cout << "Your Nineteenth Seed is" << ":" << " " << NineteenthSeedNumber << endl;
}

cout << "What is the Twentieth Seed That You Want to Convert" << "?" << endl;
cin >> TwentiethSeed;

TwentiethSeedNumber = -515975450;

if (TwentiethSeed == "Javalicious edition") {
cout << "Your Twentieth Seed is" << ":" << " " << TwentiethSeedNumber << endl;
}

cout << "What is the Twentyfirst Seed That You Want to Convert" << "?" << endl;
cin >> TwentyFirstSeed;

TwentyfirstSeedNumber = 346396627;

if (TwentyFirstSeed == "Pretty scary!") {
cout << "Your Twenty First Seed is" << ":" << " " << TwentyfirstSeedNumber << endl; }

cout << "What is the Twenty Second Seed That You Want to Convert" << "?" << endl;
cin >> TwentySecondSeed;

TwentysecondSeedNumber = 728992760;

if (TwentySecondSeed == "Singleplayer!") {
cout << "Your Twenty Second Seed is" << ":" << " " << TwentysecondSeedNumber << endl; }

cout << "What is the Twenty Third Seed That You Want to Convert" << "?" << endl;
cin >> TwentyThirdSeed;

TwentythirdSeedNumber = -289035001;

if (TwentyThirdSeed == "Helo Cymru!") {
cout << "Your Twenty Third Seed is" << ":" << " " << TwentythirdSeedNumber << endl;
}











//Setting all of the seed number variables to their inital values before they're changed to their final values and output to ensure that they haven't changed since they were last updated.
FirstSeedNumber = 0;
SecondSeedNumber = 0;
ThirdSeedNumber = 0;
FourthSeedNumber = 0;
FifthSeedNumber = 0;
SixthSeedNumber = 0;
SeventhSeedNumber = 0;
EighthSeedNumber = 0;
NinthSeedNumber = 0;
TenthSeedNumber = 0;
EleventhSeedNumber = 0;
TwelvethSeedNumber = 0;
ThirteenthSeedNumber = 0;
FourteenthSeedNumber = 0;
FifteenthSeedNumber = 0;
SixteenthSeedNumber = 0;
SeventeenthSeedNumber = 0;
EighteenthSeedNumber = 0;
NineteenthSeedNumber = 0;
TwentiethSeedNumber = 0;
TwentyfirstSeedNumber = 0;
TwentysecondSeedNumber = 0;

//Setting all of the seed number variables back to their final values before they're output to ensure that they haven't changed since they were last updated.
FirstSeedNumber = -1810686126;
SecondSeedNumber = -1299122138;
ThirdSeedNumber = 704695333;
FourthSeedNumber = 841911383;
FifthSeedNumber = 644147651;
SixthSeedNumber = 2036351819;
SeventhSeedNumber = 1374701714;
EighthSeedNumber = -1431799974;
NinthSeedNumber = -791050504;
TenthSeedNumber = 143752824;
EleventhSeedNumber = 549314060;
TwelvethSeedNumber = 1574333678;
ThirteenthSeedNumber = -1147073430;
FourteenthSeedNumber = -1515550977;
FifteenthSeedNumber = -1427588257;
SixteenthSeedNumber = 1231855230;
SeventeenthSeedNumber = 467262140;
EighteenthSeedNumber = 2109047368;
NineteenthSeedNumber = 1890397784;
TwentiethSeedNumber = -515975450;
TwentyfirstSeedNumber = 346396627;
TwentysecondSeedNumber = 728992760;

//Outputs all of the seeds converted thus far.
cout << "Here Are All of the Seed Numbers So Far" << ":" << endl;
cout << FirstSeedNumber << endl;
cout << SecondSeedNumber << endl;
cout << ThirdSeedNumber << endl;
cout << FourthSeedNumber << endl;
cout << FifthSeedNumber << endl;
cout << SixthSeedNumber << endl;
cout << SeventhSeedNumber << endl;
cout << EighthSeedNumber << endl;
cout << NinthSeedNumber << endl;
cout << TenthSeedNumber << endl;
cout << EleventhSeedNumber << endl;
cout << TwelvethSeedNumber << endl;
cout << ThirteenthSeedNumber << endl;
cout << FourteenthSeedNumber << endl;
cout << FifteenthSeedNumber << endl;
cout << SixteenthSeedNumber << endl;
cout << SeventeenthSeedNumber << endl;
cout << EighteenthSeedNumber << endl;
cout << NineteenthSeedNumber << endl;
cout << TwentiethSeedNumber << endl;
cout << TwentyfirstSeedNumber << endl;
cout << TwentysecondSeedNumber << endl;




cout << "Would You Like to Exit" << "?" << endl;
cin >> Exit;

if (Exit == "1") {
return 0; }

if (Exit == "2") {
return 0; }

if (Exit == "3") {
return 0; }

if (Exit == "4") {
return 0; }

if (Exit == "5") {
return 0; }

if (Exit == "6") {
return 0; }

if (Exit == "7") {
return 0; }

if (Exit == "8") {
return 0; }

if (Exit == "9") {
return 0; }

if (Exit == "10") {
return 0; }












return 0;
}