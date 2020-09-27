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

@class PBDataReader, PBUnknownFields, GEOMapRegion, NSMutableArray, NSString, NSData;

@interface GEOPlaceSearchResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	NSMutableArray* _namedFeatures;
	NSString* _nearbySectionHeader;
	NSMutableArray* _placeResults;
	NSMutableArray* _suggestionEntryLists;
	NSData* _suggestionMetadata;
	double _turnaroundTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _statusCodeInfo;
	int _status;
	BOOL _isChainResultSet;
	struct {
		unsigned has_turnaroundTime : 1;
		unsigned has_statusCodeInfo : 1;
		unsigned has_isChainResultSet : 1;
		unsigned read_unknownFields : 1;
		unsigned read_mapRegion : 1;
		unsigned read_namedFeatures : 1;
		unsigned read_nearbySectionHeader : 1;
		unsigned read_placeResults : 1;
		unsigned read_suggestionEntryLists : 1;
		unsigned read_suggestionMetadata : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * placeResults; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryLists; 
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata; 
@property (nonatomic,retain) NSMutableArray * namedFeatures; 
@property (assign,nonatomic) BOOL hasStatusCodeInfo; 
@property (assign,nonatomic) int statusCodeInfo; 
@property (assign,nonatomic) BOOL hasTurnaroundTime; 
@property (assign,nonatomic) double turnaroundTime; 
@property (nonatomic,readonly) BOOL hasNearbySectionHeader; 
@property (nonatomic,retain) NSString * nearbySectionHeader; 
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)placeResultType;
+(Class)suggestionEntryListsType;
+(Class)namedFeaturesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(BOOL)hasMapRegion;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(BOOL)isChainResultSet;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(unsigned long long)namedFeaturesCount;
-(void)clearNamedFeatures;
-(NSMutableArray *)namedFeatures;
-(void)setNamedFeatures:(NSMutableArray *)arg1 ;
-(NSString *)nearbySectionHeader;
-(void)addPlaceResult:(id)arg1 ;
-(void)addSuggestionEntryLists:(id)arg1 ;
-(void)addNamedFeatures:(id)arg1 ;
-(void)setStatusCodeInfo:(int)arg1 ;
-(void)setTurnaroundTime:(double)arg1 ;
-(void)setNearbySectionHeader:(NSString *)arg1 ;
-(NSMutableArray *)placeResults;
-(unsigned long long)placeResultsCount;
-(void)clearPlaceResults;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)suggestionEntryListsCount;
-(void)clearSuggestionEntryLists;
-(id)suggestionEntryListsAtIndex:(unsigned long long)arg1 ;
-(id)namedFeaturesAtIndex:(unsigned long long)arg1 ;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(NSMutableArray *)suggestionEntryLists;
-(void)setSuggestionEntryLists:(NSMutableArray *)arg1 ;
-(int)statusCodeInfo;
-(void)setHasStatusCodeInfo:(BOOL)arg1 ;
-(BOOL)hasStatusCodeInfo;
-(id)statusCodeInfoAsString:(int)arg1 ;
-(int)StringAsStatusCodeInfo:(id)arg1 ;
-(double)turnaroundTime;
-(void)setHasTurnaroundTime:(BOOL)arg1 ;
-(BOOL)hasTurnaroundTime;
-(BOOL)hasNearbySectionHeader;
@end
