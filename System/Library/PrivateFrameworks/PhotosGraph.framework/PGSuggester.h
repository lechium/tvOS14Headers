/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PGSuggester <NSObject>
@property (assign,nonatomic) BOOL lastSuggestionWasColliding; 
@required
+(id)suggesterWithSession:(id)arg1;
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)initWithSession:(id)arg1;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2;
-(id)reasonsForSuggestion:(id)arg1;
-(BOOL)canGenerateSuggestionWithAsset:(id)arg1 onDate:(id)arg2;
-(BOOL)lastSuggestionWasColliding;
-(void)setLastSuggestionWasColliding:(BOOL)arg1;

@end

