/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JetEngine/JetEngine-Structs.h>
@interface JEBrotliEncoder : NSObject {

	unsigned _quality;
	unsigned _sizeHint;
	BrotliEncoderStateStructRef _encoder;

}

@property (nonatomic,readonly) BrotliEncoderStateStructRef encoder;              //@synthesize encoder=_encoder - In the implementation block
@property (assign,nonatomic) unsigned quality;                                   //@synthesize quality=_quality - In the implementation block
@property (assign,nonatomic) unsigned sizeHint;                                  //@synthesize sizeHint=_sizeHint - In the implementation block
@property (nonatomic,readonly) BOOL isFinished; 
-(id)init;
-(void)dealloc;
-(BOOL)isFinished;
-(void)setQuality:(unsigned)arg1 ;
-(unsigned)quality;
-(BrotliEncoderStateStructRef)encoder;
-(void)setSizeHint:(unsigned)arg1 ;
-(BOOL)compressStreamWithOperation:(long long)arg1 availableIn:(unsigned long long*)arg2 nextIn:(const char**)arg3 availableOut:(unsigned long long*)arg4 nextOut:(char**)arg5 ;
-(unsigned)sizeHint;
@end
