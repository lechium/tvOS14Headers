/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary;

@interface _UINavTitleAppearanceData : _UIBarAppearanceData {

	NSDictionary* _titleTextAttributes;
	NSDictionary* _largeTitleTextAttributes;
	UIOffset _titlePositionAdjustment;

}

@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) NSDictionary * largeTitleTextAttributes; 
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardTitleData;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)largeTitleTextAttributes;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
@end

