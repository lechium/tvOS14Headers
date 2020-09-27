/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {

	NSMutableDictionary* _entityTranslatorByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * entityTranslatorByEntityName;              //@synthesize entityTranslatorByEntityName=_entityTranslatorByEntityName - In the implementation block
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)_registerTranslatorsWithPhotoLibrary:(id)arg1 ;
-(id)graphChangesWithPhotoChange:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)entityTranslatorByEntityName;
-(void)setEntityTranslatorByEntityName:(NSMutableDictionary *)arg1 ;
@end
