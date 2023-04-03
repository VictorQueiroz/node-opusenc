#include "Encoder.h"
#include "Comments.h"
#include "Decoder.h"

#include <nan.h>

void Init(v8::Local<v8::Object> exports){
    Encoder::Init(exports);
    Decoder::Init(exports);
    Comments::Init(exports);
}


NODE_MODULE(NodeOpusEnc,Init);
