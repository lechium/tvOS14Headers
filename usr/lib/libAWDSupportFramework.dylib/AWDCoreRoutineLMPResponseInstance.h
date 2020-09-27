/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineLMPResponseInstance : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _eventId;
	int _interaction;
	BOOL _selected;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasEventId; 
@property (nonatomic,retain) NSString * eventId;                        //@synthesize eventId=_eventId - In the implementation block
@property (assign,nonatomic) BOOL hasSelected; 
@property (assign,nonatomic) BOOL selected;                             //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL hasInteraction; 
@property (assign,nonatomic) int interaction;                           //@synthesize interaction=_interaction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setEventId:(NSString *)arg1 ;
-(BOOL)hasEventId;
-(void)setInteraction:(int)arg1 ;
-(void)setHasInteraction:(BOOL)arg1 ;
-(BOOL)hasInteraction;
-(NSString *)eventId;
-(int)interaction;
-(void)setHasSelected:(BOOL)arg1 ;
-(BOOL)hasSelected;
@end
