/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OTSupportOctagonMessage : PBCodable <NSCopying> {

	int _supported;
	SCD_Struct_OT1 _has;

}

@property (assign,nonatomic) BOOL hasSupported; 
@property (assign,nonatomic) int supported;                  //@synthesize supported=_supported - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)supported;
-(void)setSupported:(int)arg1 ;
-(void)setHasSupported:(BOOL)arg1 ;
-(BOOL)hasSupported;
-(id)supportedAsString:(int)arg1 ;
-(int)StringAsSupported:(id)arg1 ;
@end
