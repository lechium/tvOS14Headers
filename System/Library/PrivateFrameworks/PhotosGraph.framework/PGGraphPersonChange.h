/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:52 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphChange.h>

@class NSString, PGGraphPersonNode, NSSet;

@interface PGGraphPersonChange : PGGraphChange {

	NSString* _personLocalIdentifier;
	PGGraphPersonNode* _personNode;
	NSSet* _propertyNames;

}

@property (nonatomic,readonly) NSString * personLocalIdentifier;              //@synthesize personLocalIdentifier=_personLocalIdentifier - In the implementation block
@property (nonatomic,retain) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (nonatomic,readonly) NSSet * propertyNames;                         //@synthesize propertyNames=_propertyNames - In the implementation block
-(id)description;
-(unsigned long long)type;
-(NSString *)personLocalIdentifier;
-(NSSet *)propertyNames;
-(PGGraphPersonNode *)personNode;
-(void)setPersonNode:(PGGraphPersonNode *)arg1 ;
-(void)mergeChange:(id)arg1 ;
-(id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2 ;
@end

