/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaPersonalization : PBCodable {

	BOOL _personalDomainsSetup;
	BOOL _appleMusicSubscriber;
	SCD_Struct_SI3 _has;

}

@property (assign,nonatomic) BOOL personalDomainsSetup;                 //@synthesize personalDomainsSetup=_personalDomainsSetup - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalDomainsSetup; 
@property (assign,nonatomic) BOOL appleMusicSubscriber;                 //@synthesize appleMusicSubscriber=_appleMusicSubscriber - In the implementation block
@property (assign,nonatomic) BOOL hasAppleMusicSubscriber; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setPersonalDomainsSetup:(BOOL)arg1 ;
-(void)setAppleMusicSubscriber:(BOOL)arg1 ;
-(BOOL)personalDomainsSetup;
-(BOOL)appleMusicSubscriber;
-(BOOL)hasPersonalDomainsSetup;
-(void)setHasPersonalDomainsSetup:(BOOL)arg1 ;
-(BOOL)hasAppleMusicSubscriber;
-(void)setHasAppleMusicSubscriber:(BOOL)arg1 ;
@end
