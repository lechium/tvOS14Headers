/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol MCAnimationPathSupport
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@required
-(void)addAnimationPath:(id)arg1;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1;
-(id)animationPathForKey:(id)arg1;
-(unsigned long long)countOfAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;

@end

