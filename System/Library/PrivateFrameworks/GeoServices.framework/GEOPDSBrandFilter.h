/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDSBrandFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _brandMuid;
	struct {
		unsigned has_brandMuid : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasBrandMuid; 
@property (assign,nonatomic) unsigned long long brandMuid; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setBrandMuid:(unsigned long long)arg1 ;
-(unsigned long long)brandMuid;
-(void)setHasBrandMuid:(BOOL)arg1 ;
-(BOOL)hasBrandMuid;
@end

