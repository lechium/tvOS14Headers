/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEOPDViewportInfo;

@interface GEOPDAutocompleteParametersAllEntries : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _query;
	GEOPDViewportInfo* _viewportInfo;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _maxResults;
	BOOL _highlightDiff;
	struct {
		unsigned has_maxResults : 1;
		unsigned has_highlightDiff : 1;
		unsigned read_unknownFields : 1;
		unsigned read_query : 1;
		unsigned read_viewportInfo : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasQuery; 
@property (nonatomic,retain) NSString * query; 
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo; 
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults; 
@property (assign,nonatomic) BOOL hasHighlightDiff; 
@property (assign,nonatomic) BOOL highlightDiff; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(NSString *)query;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setQuery:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDViewportInfo *)viewportInfo;
-(void)setMaxResults:(int)arg1 ;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(int)maxResults;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(BOOL)hasViewportInfo;
-(void)setHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasQuery;
-(BOOL)highlightDiff;
-(void)setHasHighlightDiff:(BOOL)arg1 ;
-(BOOL)hasHighlightDiff;
@end
