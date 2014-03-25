//
//  def.h
//  CC
//
//  Created by Tian Jin on 14-3-25.
//  Copyright (c) 2014年 Tian Jin. All rights reserved.
//

#ifndef CC_def_h
#define CC_def_h

#define CC_EPSILON ""

#include <string>

using namespace std;

template<class node, class edge>
class nfa {
public:
    nfa(edge* start,node* end):_end(end), _start(start)
    {
    }
    node* _end;
    edge* _start;
};

enum LEX_TOKEN {
    TOKEN_NOT_FOUND,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_ASTERISK,
    TOKEN_QUESTION_MARK,
    TOKEN_PIPE
};

class lex_parcel {
    LEX_TOKEN type;
    string val;
};

#endif