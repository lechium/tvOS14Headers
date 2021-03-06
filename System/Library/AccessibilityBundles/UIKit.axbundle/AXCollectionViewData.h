/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface AXCollectionViewData : NSObject {

	NSMutableDictionary* _children;
	long long _childCount;

}

@property (assign,nonatomic) long long childCount;                          //@synthesize childCount=_childCount - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * children;              //@synthesize children=_children - In the implementation block
-(id)description;
-(id)init;
-(NSMutableDictionary *)children;
-(long long)childCount;
-(void)setChildCount:(long long)arg1 ;
@end

