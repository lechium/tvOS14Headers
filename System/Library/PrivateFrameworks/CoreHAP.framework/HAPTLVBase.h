/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVDescription.h>

@class NSData;

@interface HAPTLVBase : HAPTLVDescription {

	NSData* _tlvDatablob;

}

@property (nonatomic,readonly) NSData * tlvDatablob;              //@synthesize tlvDatablob=_tlvDatablob - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(BOOL)_parseFromTLVData;
-(NSData *)tlvDatablob;
-(id)_parseArray:(id)arg1 result:(id*)arg2 objectCreator:(/*^block*/id)arg3 ;
-(BOOL)_parseFields:(id)arg1 ;
-(BOOL)_parseMandatory:(id)arg1 optional:(id)arg2 ;
-(BOOL)_parse:(id)arg1 ;
@end

