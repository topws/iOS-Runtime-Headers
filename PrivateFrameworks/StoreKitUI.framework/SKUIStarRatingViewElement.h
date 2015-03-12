/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement {
    float _ratingValue;
    int _starType;
    SKUIViewElementText *_text;
    bool_enabled;
}

@property(readonly) float ratingValue;
@property(readonly) int starType;
@property(readonly) SKUIViewElementText * text;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (float)ratingValue;
- (int)starType;
- (id)text;

@end