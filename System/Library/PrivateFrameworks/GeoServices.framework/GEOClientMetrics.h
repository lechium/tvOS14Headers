/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOClientNetworkMetrics;

@interface GEOClientMetrics : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOClientNetworkMetrics* _networkMetrics;
	int _offlineReason;
	int _responseSource;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasResponseSource; 
@property (assign,nonatomic) int responseSource; 
@property (nonatomic,readonly) BOOL hasNetworkMetrics; 
@property (nonatomic,retain) GEOClientNetworkMetrics * networkMetrics; 
@property (assign,nonatomic) BOOL hasOfflineReason; 
@property (assign,nonatomic) int offlineReason; 
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
-(int)responseSource;
-(GEOClientNetworkMetrics *)networkMetrics;
-(void)setResponseSource:(int)arg1 ;
-(void)setNetworkMetrics:(GEOClientNetworkMetrics *)arg1 ;
-(void)setOfflineReason:(int)arg1 ;
-(void)setHasResponseSource:(BOOL)arg1 ;
-(BOOL)hasResponseSource;
-(id)responseSourceAsString:(int)arg1 ;
-(int)StringAsResponseSource:(id)arg1 ;
-(BOOL)hasNetworkMetrics;
-(int)offlineReason;
-(void)setHasOfflineReason:(BOOL)arg1 ;
-(BOOL)hasOfflineReason;
-(id)offlineReasonAsString:(int)arg1 ;
-(int)StringAsOfflineReason:(id)arg1 ;
@end

