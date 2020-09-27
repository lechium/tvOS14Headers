/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
@interface _EARTokenizer : NSObject {

	BasicTextSanitizer* _sanitizer;
	shared_ptr<quasar::TextTokenizer>* _tokenizer;

}
+(unique_ptr<quasar::TextTokenizer, std::__1::default_delete<quasar::TextTokenizer> >*)tokenizerWithNcsRoot:(id)arg1 ;
-(id)tokenize:(id)arg1 ;
-(id)initWithNcsRoot:(id)arg1 ;
@end
