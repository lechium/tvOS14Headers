/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOLatLng, GEORestrictionInfo;

@interface GEORouteIncident : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _crossStreet;
	long long _endTime;
	NSString* _incidentId;
	NSString* _info;
	GEOLatLng* _position;
	GEORestrictionInfo* _restrictionInfo;
	long long _startTime;
	NSString* _street;
	long long _updateTime;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _laneClosureCount;
	int _laneClosureType;
	int _significance;
	int _type;
	unsigned _userReportsCount;
	BOOL _endTimeReliable;
	BOOL _shouldDisplayOnMap;
	SCD_Struct_GE74 _flags;

}

@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOLatLng * position; 
@property (nonatomic,readonly) BOOL hasIncidentId; 
@property (nonatomic,retain) NSString * incidentId; 
@property (nonatomic,readonly) BOOL hasInfo; 
@property (nonatomic,retain) NSString * info; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasStreet; 
@property (nonatomic,retain) NSString * street; 
@property (nonatomic,readonly) BOOL hasCrossStreet; 
@property (nonatomic,retain) NSString * crossStreet; 
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) long long startTime; 
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) long long endTime; 
@property (assign,nonatomic) BOOL hasUpdateTime; 
@property (assign,nonatomic) long long updateTime; 
@property (assign,nonatomic) BOOL hasLaneClosureType; 
@property (assign,nonatomic) int laneClosureType; 
@property (assign,nonatomic) BOOL hasLaneClosureCount; 
@property (assign,nonatomic) unsigned laneClosureCount; 
@property (assign,nonatomic) BOOL hasEndTimeReliable; 
@property (assign,nonatomic) BOOL endTimeReliable; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) int significance; 
@property (nonatomic,readonly) BOOL hasRestrictionInfo; 
@property (nonatomic,retain) GEORestrictionInfo * restrictionInfo; 
@property (assign,nonatomic) BOOL hasUserReportsCount; 
@property (assign,nonatomic) unsigned userReportsCount; 
@property (assign,nonatomic) BOOL hasShouldDisplayOnMap; 
@property (assign,nonatomic) BOOL shouldDisplayOnMap; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(long long)startTime;
-(void)setStartTime:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)position;
-(void)setPosition:(GEOLatLng *)arg1 ;
-(NSString *)info;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(void)setEndTime:(long long)arg1 ;
-(long long)endTime;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)incidentId;
-(NSString *)street;
-(NSString *)crossStreet;
-(void)setIncidentId:(NSString *)arg1 ;
-(void)setUpdateTime:(long long)arg1 ;
-(void)setStreet:(NSString *)arg1 ;
-(void)setCrossStreet:(NSString *)arg1 ;
-(void)setLaneClosureCount:(unsigned)arg1 ;
-(void)setEndTimeReliable:(BOOL)arg1 ;
-(void)setLaneClosureType:(int)arg1 ;
-(void)setSignificance:(int)arg1 ;
-(BOOL)hasIncidentId;
-(long long)updateTime;
-(void)setHasUpdateTime:(BOOL)arg1 ;
-(BOOL)hasUpdateTime;
-(BOOL)hasStreet;
-(BOOL)hasCrossStreet;
-(unsigned)laneClosureCount;
-(void)setHasLaneClosureCount:(BOOL)arg1 ;
-(BOOL)hasLaneClosureCount;
-(BOOL)endTimeReliable;
-(void)setHasEndTimeReliable:(BOOL)arg1 ;
-(BOOL)hasEndTimeReliable;
-(int)laneClosureType;
-(void)setHasLaneClosureType:(BOOL)arg1 ;
-(BOOL)hasLaneClosureType;
-(id)laneClosureTypeAsString:(int)arg1 ;
-(int)StringAsLaneClosureType:(id)arg1 ;
-(int)significance;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(id)significanceAsString:(int)arg1 ;
-(int)StringAsSignificance:(id)arg1 ;
-(BOOL)hasPosition;
-(GEORestrictionInfo *)restrictionInfo;
-(void)setInfo:(NSString *)arg1 ;
-(void)setRestrictionInfo:(GEORestrictionInfo *)arg1 ;
-(void)setUserReportsCount:(unsigned)arg1 ;
-(void)setShouldDisplayOnMap:(BOOL)arg1 ;
-(BOOL)hasInfo;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(BOOL)hasRestrictionInfo;
-(unsigned)userReportsCount;
-(void)setHasUserReportsCount:(BOOL)arg1 ;
-(BOOL)hasUserReportsCount;
-(BOOL)shouldDisplayOnMap;
-(void)setHasShouldDisplayOnMap:(BOOL)arg1 ;
-(BOOL)hasShouldDisplayOnMap;
@end
