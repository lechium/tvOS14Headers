/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDEventKitSyncSyncedAttendeeResponseFromWatch : PBCodable <NSCopying> {

	unsigned long long _deltaTransitTime;
	unsigned long long _timestamp;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeltaTransitTime; 
@property (assign,nonatomic) unsigned long long deltaTransitTime;              //@synthesize deltaTransitTime=_deltaTransitTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setDeltaTransitTime:(unsigned long long)arg1 ;
-(void)setHasDeltaTransitTime:(BOOL)arg1 ;
-(BOOL)hasDeltaTransitTime;
-(unsigned long long)deltaTransitTime;
@end
