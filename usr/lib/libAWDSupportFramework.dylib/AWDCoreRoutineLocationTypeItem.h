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

@interface AWDCoreRoutineLocationTypeItem : PBCodable <NSCopying> {

	int _locationType;
	int _percentage;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                  //@synthesize locationType=_locationType - In the implementation block
@property (assign,nonatomic) BOOL hasPercentage; 
@property (assign,nonatomic) int percentage;                    //@synthesize percentage=_percentage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(int)locationType;
-(void)setPercentage:(int)arg1 ;
-(void)setHasPercentage:(BOOL)arg1 ;
-(BOOL)hasPercentage;
-(int)percentage;
@end

