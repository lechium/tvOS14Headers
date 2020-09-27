/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHSceneClassification : NSObject {

	unsigned _sceneIdentifier;
	double _confidence;
	long long _packedBoundingBoxRect;
	CGRect _boundingBox;

}

@property (assign,nonatomic) long long packedBoundingBoxRect;              //@synthesize packedBoundingBoxRect=_packedBoundingBoxRect - In the implementation block
@property (nonatomic,readonly) unsigned sceneIdentifier;                   //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) double confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                         //@synthesize boundingBox=_boundingBox - In the implementation block
+(id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(double)confidence;
-(CGRect)boundingBox;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned)sceneIdentifier;
-(void)setPackedBoundingBoxRect:(long long)arg1 ;
-(id)initWithSceneIdentifier:(unsigned)arg1 confidence:(double)arg2 ;
-(id)initWithSceneIdentifier:(unsigned)arg1 confidence:(double)arg2 boundingBox:(CGRect)arg3 ;
-(BOOL)isEqualToSceneClassification:(id)arg1 ;
-(long long)packedBoundingBoxRect;
@end
