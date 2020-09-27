/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKProtobufPaymentSetupFeature : PBCodable <NSCopying> {

	unsigned long long _state;
	unsigned long long _type;
	SCD_Struct_PK7 _has;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasState; 
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasState;
-(void)setHasState:(BOOL)arg1 ;
@end
