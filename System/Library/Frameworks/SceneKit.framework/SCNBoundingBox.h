/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNBoundingBox : NSObject {

	SCNVector3 min;
	SCNVector3 max;

}

@property (assign,nonatomic) SCNVector3 min; 
@property (assign,nonatomic) SCNVector3 max; 
-(id)description;
-(void)setMax:(SCNVector3)arg1 ;
-(SCNVector3)max;
-(SCNVector3)min;
-(void)setMin:(SCNVector3)arg1 ;
@end
