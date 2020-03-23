#pragma once

#include <tesla.hpp>

class MusicOverlayFrame : public tsl::elm::Element {
  private:
    tsl::elm::Element *m_contentElement;
    const char *m_description;

  public:
    MusicOverlayFrame(const char *description);
    virtual ~MusicOverlayFrame();

    virtual void draw(tsl::gfx::Renderer *renderer) override;
    virtual void layout(u16 parentX, u16 parentY, u16 parentWidth, u16 parentHeight) override;
    virtual tsl::elm::Element *requestFocus(tsl::elm::Element *oldFocus, tsl::FocusDirection direction) override;
    virtual void setContent(tsl::elm::Element *content) final;

    void setDescription(const char *description);
};
