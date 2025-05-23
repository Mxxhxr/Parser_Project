#ifndef VALUE_H
#define VALUE_H

#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <iomanip>
#include <stdexcept>
#include <cmath>
#include <sstream>

using namespace std;

enum ValType { VINT, VREAL, VSTRING, VBOOL, VERR };

class Value {
    ValType	T;
    bool    Btemp;
    int 	Itemp;
	double   Rtemp;
    string	Stemp;
    
       
public:
    Value() : T(VERR), Btemp(false), Itemp(0), Rtemp(0.0), Stemp("") {}
    Value(bool vb) : T(VBOOL), Btemp(vb), Itemp(0), Rtemp(0.0), Stemp("") {}
    Value(int vi) : T(VINT), Btemp(false), Itemp(vi), Rtemp(0.0), Stemp("") {}
    Value(double vr) : T(VREAL), Btemp(false), Itemp(0), Rtemp(vr), Stemp("") {}
    Value(string vs) : T(VSTRING), Btemp(false), Itemp(0), Rtemp(0.0), Stemp(vs) {}
    
    
    ValType GetType() const { return T; }
    bool IsErr() const { return T == VERR; }
     bool IsString() const { return T == VSTRING; }
    bool IsReal() const {return T == VREAL;}
    bool IsBool() const {return T == VBOOL;}
    bool IsInt() const { return T == VINT; }
    
    int GetInt() const { if( IsInt() ) return Itemp; throw "RUNTIME ERROR: Value not an integer"; }
    
    string GetString() const { if( IsString() ) return Stemp; throw "RUNTIME ERROR: Value not a string"; }
    
    double GetReal() const { if( IsReal() ) return Rtemp; throw "RUNTIME ERROR: Value not an integer"; }
    
    bool GetBool() const {if(IsBool()) return Btemp; throw "RUNTIME ERROR: Value not a boolean";}
    
    void SetType(ValType type) {
        T = type;
	}
	
	void SetInt(int val) {
        Itemp = val;
	}
	
	void SetReal(double val) {
        Rtemp = val;
	}
	
	void SetString(string val) {
        Stemp = val;
	}
	
	void SetBool(bool val) {
        Btemp = val;
	}
	
    // numeric overloaded add this to op
    Value operator+(const Value& op) const;
    
    // numeric overloaded subtract op from this
    Value operator-(const Value& op) const;
    
    // numeric overloaded multiply this by op
    Value operator*(const Value& op) const;
    
    // numeric overloaded divide this by oper
    Value operator/(const Value& op) const;
    
    // numeric overloaded modulus of this by oper
    Value operator%(const Value& oper) const;
    
    //numeric integer division this by oper
    Value div(const Value& oper) const;
    
    
    //overloaded equality operator of this with op
    Value operator==(const Value& op) const;
	//overloaded greater than operator of this with op
	Value operator>(const Value& op) const;
	//overloaded less than operator of this with op
	Value operator<(const Value& op) const;
	
	//integer divide operator of this by op
	Value idiv(const Value& op) const;
	
	//Logic operations  
	Value operator&&(const Value& oper) const;//Overloaded Anding operator
	Value operator||(const Value& oper) const;//Overloaded Oring operator
	Value operator!() const;//Overloaded Not/complement operator
	
    friend ostream& operator<<(ostream& out, const Value& op) {
        if( op.IsInt() ) out << op.Itemp;
		else if( op.IsString() ) out << op.Stemp ;
        else if( op.IsReal()) out << fixed << showpoint << setprecision(2) << op.Rtemp;
        else if(op.IsBool()) out << (op.GetBool()? "true" : "false");
        else out << "ERROR";
        return out;
    }
};

#endif
