/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:48 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUIStatePresenting : PBCodable {

	int _presentationType;
	SCD_Struct_SI1 _has;

}

@property (assign,nonatomic) int presentationType;                  //@synthesize presentationType=_presentationType - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationType; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(int)presentationType;
-(void)setPresentationType:(int)arg1 ;
-(NSData *)jsonData;
-(BOOL)hasPresentationType;
-(void)setHasPresentationType:(BOOL)arg1 ;
@end

