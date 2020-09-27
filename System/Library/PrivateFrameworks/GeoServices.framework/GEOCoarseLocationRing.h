/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOCoarseLocationRing : PBCodable <NSCopying> {

	GEOCoarseLocationPoint* _points;
	unsigned long long _pointsCount;
	unsigned long long _pointsSpace;

}

@property (nonatomic,readonly) unsigned long long pointsCount; 
@property (nonatomic,readonly) GEOCoarseLocationPoint* points; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOCoarseLocationPoint*)points;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)clearPoints;
-(void)addPoints:(GEOCoarseLocationPoint)arg1 ;
-(unsigned long long)pointsCount;
-(GEOCoarseLocationPoint)pointsAtIndex:(unsigned long long)arg1 ;
-(void)setPoints:(GEOCoarseLocationPoint*)arg1 count:(unsigned long long)arg2 ;
@end
