/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <SpeechSynthesis/OPTTSWordTimingInfo.h>

@class NSString;

@interface OPTTSMutableWordTimingInfo : OPTTSWordTimingInfo

@property (nonatomic,copy) NSString * word; 
@property (assign,nonatomic) unsigned sample_idx; 
@property (assign,nonatomic) unsigned offset; 
@property (assign,nonatomic) unsigned length; 
@property (assign,nonatomic) float timestamp; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned)length;
-(void)setLength:(unsigned)arg1 ;
-(float)timestamp;
-(unsigned)offset;
-(void)setOffset:(unsigned)arg1 ;
-(void)setTimestamp:(float)arg1 ;
-(NSString *)word;
-(void)setWord:(NSString *)arg1 ;
-(unsigned)sample_idx;
-(void)setSample_idx:(unsigned)arg1 ;
@end
