/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFShazamMedia;

@interface WFShazamMediaContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFShazamMedia * media; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
+(id)contentCategories;
+(id)outputTypes;
-(id)title;
-(id)artworkURL;
-(id)artist;
-(WFShazamMedia *)media;
-(id)videoURL;
-(id)isExplicit;
-(id)preferredFileType;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getArtworkDataWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)appleMusicID;
-(id)shazamURL;
-(id)appleMusicURL;
-(id)lyricsSnippet;
-(id)lyricsSnippetSynced;
@end
