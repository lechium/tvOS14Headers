/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiFiNWActivityStateBin : PBCodable <NSCopying> {

	unsigned long long _residentTime;
	NSString* _state;
	SCD_Struct_AW5 _has;

}

@property (nonatomic,readonly) BOOL hasState; 
@property (nonatomic,retain) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasResidentTime; 
@property (assign,nonatomic) unsigned long long residentTime;              //@synthesize residentTime=_residentTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasState;
-(void)setResidentTime:(unsigned long long)arg1 ;
-(void)setHasResidentTime:(BOOL)arg1 ;
-(BOOL)hasResidentTime;
-(unsigned long long)residentTime;
@end
