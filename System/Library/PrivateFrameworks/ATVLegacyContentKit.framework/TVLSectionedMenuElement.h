/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, TVLInitialSelectionElement;


@protocol TVLSectionedMenuElement <NSObject>
@property (nonatomic,retain) NSArray * sections; 
@property (nonatomic,retain) TVLInitialSelectionElement * initialSelection; 
@required
-(NSArray *)sections;
-(void)setSections:(id)arg1;
-(TVLInitialSelectionElement *)initialSelection;
-(void)setInitialSelection:(id)arg1;

@end
