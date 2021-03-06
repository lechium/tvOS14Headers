/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class TDMultisizeImageSetProduction, NSSet;

@interface TDMultisizeImageSetRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) TDMultisizeImageSetProduction * multisizeImageSetProduction; 
@property (nonatomic,retain) NSSet * multisizeImageRenditions; 
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
@end

