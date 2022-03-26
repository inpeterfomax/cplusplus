
class String 
{
private:
    enum {MAX=128;};
    char raw[MAX];
public:
    String ();
    String (const string s1);
    String operator=(const String s1) const;
    String operator+(const String s1) const;
    void stringlow(); 
    void stringup();
    int has (const char* c) const;
};
