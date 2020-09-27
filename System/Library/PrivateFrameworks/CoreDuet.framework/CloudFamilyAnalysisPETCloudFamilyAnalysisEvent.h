/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CloudFamilyAnalysisPETContactEvents;

@interface CloudFamilyAnalysisPETCloudFamilyAnalysisEvent : PBCodable <NSCopying> {

	int _batch;
	NSString* _collectionId;
	CloudFamilyAnalysisPETContactEvents* _contactEvents;
	NSString* _sessionId;

}

@property (nonatomic,retain) NSString * collectionId;                                          //@synthesize collectionId=_collectionId - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                             //@synthesize sessionId=_sessionId - In the implementation block
@property (assign,nonatomic) int batch;                                                        //@synthesize batch=_batch - In the implementation block
@property (nonatomic,retain) CloudFamilyAnalysisPETContactEvents * contactEvents;              //@synthesize contactEvents=_contactEvents - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(NSString *)collectionId;
-(void)setCollectionId:(NSString *)arg1 ;
-(void)setContactEvents:(CloudFamilyAnalysisPETContactEvents *)arg1 ;
-(int)batch;
-(void)setBatch:(int)arg1 ;
-(CloudFamilyAnalysisPETContactEvents *)contactEvents;
@end
